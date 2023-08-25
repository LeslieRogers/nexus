module load cmake/3.20.3-vedypwm
module load gcc/10.2.0-z53hda3
module load hdf5/1.10.7-uawmaye
module load gsl/2.7.1-odsu3sx

# Geant4 Path, edit G4Install path to where the main geant4 code folder your downloaded
export G4INSTALL=/gpfs/fs0/project/NEXT/software/packages/geant4-v11.0.2_build;
export PATH=$G4INSTALL/bin:$PATH;
export LD_LIBRARY_PATH=$G4INSTALL/lib64:$LD_LIBRARY_PATH;

cd $G4INSTALL/bin;
source geant4.sh;
cd -;

# Path to GSL
export GSL_PATH=$GSL_HOME;
export PATH=$PATH:$GSL_PATH/bin;
export LD_LIBRARY_PATH=$GSL_PATH/lib:$LD_LIBRARY_PATH;

# Path to HDF5
export HDF5_LIB=$HDF5_LIB/;
export HDF5_INC=$HDF5_INCLUDE;
export LD_LIBRARY_PATH=$HDF5_LIB:$LD_LIBRARY_PATH;


# Source the default nexus setup file
source /gpfs/fs0/project/NEXT/software/nexus/scripts/nexus_setup.sh



# Add the nexus exe to the path
export PATH=$PATH:/gpfs/fs0/project/NEXT/software/nexus/bin/

echo "Setup Nexus is complete!!"


