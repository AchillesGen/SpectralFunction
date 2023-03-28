#include "SpectralFunction/System.hh"
#include "SpectralFunction/Utilities.hh"

std::vector<fs::path> Spectral::Filesystem::Paths() {
    std::vector<std::string> dirs;
    const char* env = std::getenv("SPECTRAL_DATA_DIR");
    if(env) Spectral::tokenize(std::string(env), dirs, ":");
    dirs.push_back(Spectral::PathVariables::data_path);
    return dirs;
}
