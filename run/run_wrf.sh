#PBS -S /bin/bash
#PBS -N SoilM_NUDG
##PBS -l select=26:ncpus=20:model=ivy
##PBS -l select=171:ncpus=12:model=wes
##PBS -l select=6:ncpus=28:model=bro:aoe=sles12
##PBS -l select=5:ncpus=24:model=has
#PBS -l select=3:ncpus=40:model=sky_ele
##PBS -l select=43:ncpus=12:model=wes
##PBS -l select=20:ncpus=28:model=bro
##PBS -l select=1:ncpus=120:model=rom_ait
##PBS -l select=15:ncpus=40:model=cas_ait
##PBS -l select=20:ncpus=28:model=bro
##PBS -l select=64:ncpus=8
#PBS -l walltime=2:00:00
#PBS -q devel
##PBS -q debug
#PBS -j oe
#PBS -W group_list=s2395
#PBS -m e

source /usr/share/modules/init/bash
module purge
module load mpi-hpe/mpt
module load comp-intel/2016.2.181

module load hdf4/4.2.12
module load hdf5/1.8.18_mpt
module load netcdf/4.4.1.1_mpt

set MPI_SHEPHERD = true

mpiexec -np 120 ./wrf.exe

