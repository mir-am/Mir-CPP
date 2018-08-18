#include <iostream>

// Mlpack
#include <mlpack/core.hpp>
#include <mlpack/core/util/cli.hpp>
#define BINDING_TYPE BINDING_TYPE_CLI
#include <mlpack/core/util/mlpack_main.hpp>
#include <mlpack/methods/neighbor_search/neighbor_search.hpp>
#include <armadillo>



using namespace std;
using namespace mlpack;
using namespace mlpack::neighbor;
using namespace arma;


void mlpackMain()
{

    Timer::Start("Load_dataset");

    mat dataset;
    data::Load("dataset/cod-rna-mlpack.csv", dataset);

    // Parameter k: number of nearest neighbors
    const size_t k = 5;
    KNN knnMethod(dataset);

    // Store indices of KNNs and correspondig distance
    Mat<size_t> resultingNeighbors;
    mat resultingDistances;

    knnMethod.Search(k, resultingNeighbors, resultingDistances);

    Timer::Stop("Load_dataset");

    //cout << dataset << endl;



}
