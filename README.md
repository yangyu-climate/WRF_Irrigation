# WRF-Irrigation

WRF-Irrigation is a modified Weather Research and Forecasting (WRF) Model that represents agricultural irrigation using sprinkler, micro/drip, and channel/flood methods. This repository provides ports of the irrigation implementation for several WRF versions.

The implementation was developed for the study:

> Yu, Y., et al. (2025). A Numerical Study of the Agricultural Irrigation Effects on Summer Soil Moisture and Near-Surface Meteorology in California's Central Valley. *Journal of Hydrometeorology*, 26, 641-659. https://doi.org/10.1175/JHM-D-24-0129.1

## Versions

| WRF base | Branch | Tag | Notes |
| --- | --- | --- | --- |
| WRF 4.4.1 | [`wrf-4.4.1`](https://github.com/yangyu-climate/WRF_Irrigation/tree/wrf-4.4.1) | `v4.4.1-irrigation` | Version used for the published study |
| WRF 4.4.2 | [`wrf-4.4.2`](https://github.com/yangyu-climate/WRF_Irrigation/tree/wrf-4.4.2) | `v4.4.2-irrigation` | Port for WRF 4.4.2 |
| WRF 4.6.1 | [`main`](https://github.com/yangyu-climate/WRF_Irrigation/tree/main) | `v4.6.1-irrigation` | Port for WRF 4.6.1; current default branch |
| WRF 4.6.1 with WRF-Chem/KPP | [`wrf-4.6.1-chem-kpp`](https://github.com/yangyu-climate/WRF_Irrigation/tree/wrf-4.6.1-chem-kpp) | `v4.6.1-irrigation-chem-kpp` | Derived from the WRF 4.6.1 port and integrated with WRF-Chem/KPP |

The WRF-Chem/KPP branch is a compatibility and integration version. The published paper used WRF 4.4.1 and did not use WRF-Chem.

## Irrigation implementation

The model includes:

- concurrent sprinkler, micro/drip, and channel/flood irrigation, with method fractions used to partition the total applied water;
- irrigation land-fraction weighting;
- spatially heterogeneous, two-dimensional irrigation rates;
- irrigation timing and frequency controls, including the sub-daily-frequency correction described in the paper; and
- irrigation fields and diagnostics registered in the WRF input/output system.

In the WRF physics namelist, `sf_surf_irr_scheme = 4` selects the combined-method irrigation package. The irrigation rate, land fraction, method fractions, frequency, and start-day fields must be prepared consistently with the intended experiment. See `Registry/Registry.EM_COMMON` and `phys/module_irrigation.F` for the authoritative options and implementation in each branch.

## Building WRF

Build and run this source tree using the standard workflow for the corresponding WRF release. The original WRF overview is preserved in [WRF_README.md](WRF_README.md); general documentation is available from the [WRF Model Users' Web Site](https://www2.mmm.ucar.edu/wrf/users/).

Model input data and the observational datasets analyzed in the paper are not included in this repository. Refer to the paper's data availability statement for their sources.

## Citation

If this irrigation implementation is used in research, please cite the paper above as well as the appropriate WRF release. Citation metadata is also provided in [CITATION.cff](CITATION.cff).

## License

The underlying WRF source is provided under the UCAR/NCAR public-domain notice in [LICENSE.txt](LICENSE.txt). Retain that notice in full or partial copies of WRF.
