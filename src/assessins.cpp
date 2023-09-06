template void
vecRemoveIxs(std::vector<uint16_t>& vec, std::vector<unsigned int>& ixs);

template void
vecRemoveIxs(std::vector<uint32_t>& vec, std::vector<unsigned int>& ixs);

template void
vecRemoveIxs(std::vector<uint64_t>& vec, std::vector<unsigned int>& ixs);

template void
arrRemoveIxs(uint16_t* arr, uint8_t last, std::vector<unsigned int>& ixs);

template void
arrRemoveIxs(uint32_t* arr, uint8_t last, std::vector<unsigned int>& ixs);

template void
arrRemoveIxs(uint64_t* arr, uint8_t last, std::vector<unsigned int>& ixs);

template void
vecArgsort1D(std::vector<unsigned int>& ixs, const std::vector<uint16_t>& vec, bool reverse);

template void
vecArgsort1D(std::vector<unsigned int>& ixs, const std::vector<uint32_t>& vec, bool reverse);

template void
vecArgsort1D(std::vector<unsigned int>& ixs, const std::vector<uint64_t>& vec, bool reverse);

template void
arrArgsort1D(std::vector<unsigned int>& ixs, const uint16_t* arr, uint8_t last, bool reverse);

template void
arrArgsort1D(std::vector<unsigned int>& ixs, const uint32_t* arr, uint8_t last, bool reverse);

template void
arrArgsort1D(std::vector<unsigned int>& ixs, const uint64_t* arr, uint8_t last, bool reverse);

template uint16_t
arrArgmax2D(const uint16_t* arr,
            const uint8_t* ind_arr,
            uint32_t num_rows,
            uint8_t b,
            uint64_t n,
            bool reverse);

template uint64_t
arrArgmax2D(const uint64_t* arr,
            const uint8_t* ind_arr,
            uint32_t num_rows,
            uint8_t b,
            uint64_t n,
            bool reverse);

template uint32_t
arrArgmax2D(const uint32_t* arr,
            const uint8_t* ind_arr,
            uint32_t num_rows,
            uint8_t b,
            uint64_t n,
            bool reverse);

template uint16_t
vvecArgmax2D(const vvec<uint16_t>& vvec, uint64_t n, bool reverse);

template uint32_t
vvecArgmax2D(const vvec<uint32_t>& vvec, uint64_t n, bool reverse);

template uint64_t
vvecArgmax2D(const vvec<uint64_t>& vvec, uint64_t n, bool reverse);

template void
vecIxsNumber(std::vector<unsigned int>& ixs,
             const std::vector<uint16_t>& s_vec,
             uint8_t number,
             bool reverse);

template void
vecIxsNumber(std::vector<unsigned int>& ixs,
             const std::vector<uint32_t>& s_vec,
             uint8_t number,
             bool reverse);

template void
vecIxsNumber(std::vector<unsigned int>& ixs,
             const std::vector<uint64_t>& s_vec,
             uint8_t number,
             bool reverse);

template void
vecIxsThreshold(std::vector<unsigned int>& ixs,
                const std::vector<uint16_t>& s_vec,
                uint16_t threshold,
                bool reverse);

template void
vecIxsThreshold(std::vector<unsigned int>& ixs,
                const std::vector<uint32_t>& s_vec,
                uint32_t threshold,
                bool reverse);

template void
vecIxsThreshold(std::vector<unsigned int>& ixs,
                const std::vector<uint64_t>& s_vec,
                uint64_t threshold,
                bool reverse);

template void
arrIxsNumber(std::vector<unsigned int>& ixs, const uint16_t* s_arr, uint8_t number, bool reverse);

template void
arrIxsNumber(std::vector<unsigned int>& ixs, const uint32_t* s_arr, uint8_t number, bool reverse);

template void
arrIxsNumber(std::vector<unsigned int>& ixs, const uint64_t* s_arr, uint8_t number, bool reverse);

template void
arrIxsThreshold(std::vector<unsigned int>& ixs,
                const uint16_t* s_arr,
                uint8_t last,
                uint16_t threshold,
                bool reverse);

template void
arrIxsThreshold(std::vector<unsigned int>& ixs,
                const uint32_t* s_arr,
                uint8_t last,
                uint32_t threshold,
                bool reverse);

template void
arrIxsThreshold(std::vector<unsigned int>& ixs,
                const uint64_t* s_arr,
                uint8_t last,
                uint64_t threshold,
                bool reverse);

template void
vvecSizeOrder(std::vector<unsigned int>& ixs, const vvec<uint16_t>& vvec, bool reverse);

template void
vvecSizeOrder(std::vector<unsigned int>& ixs, const vvec<uint32_t>& vvec, bool reverse);

template void
vvecSizeOrder(std::vector<unsigned int>& ixs, const vvec<uint64_t>& vvec, bool reverse);

template void
vecInformationScores(std::vector<uint64_t>& scores_vec,
                     std::vector<uint32_t>& enc_vec,
                     std::unordered_map<uint32_t, std::vector<uint64_t>>& values_map);

template void
vecInformationScores(std::vector<uint32_t>& scores_vec,
                     std::vector<uint32_t>& enc_vec,
                     std::unordered_map<uint32_t, std::vector<uint32_t>>& values_map);

template void
vecInformationScores(std::vector<uint16_t>& scores_vec,
                     std::vector<uint32_t>& enc_vec,
                     std::unordered_map<uint32_t, std::vector<uint16_t>>& values_map);

template void
vecInformationScores(std::vector<uint64_t>& scores_vec,
                     std::vector<uint64_t>& enc_vec,
                     std::unordered_map<uint64_t, std::vector<uint64_t>>& values_map);

template void
vecInformationScores(std::vector<uint32_t>& scores_vec,
                     std::vector<uint64_t>& enc_vec,
                     std::unordered_map<uint64_t, std::vector<uint32_t>>& values_map);

template void
vecInformationScores(std::vector<uint16_t>& scores_vec,
                     std::vector<uint64_t>& enc_vec,
                     std::unordered_map<uint64_t, std::vector<uint16_t>>& values_map);

template void
arrInformationScores(std::vector<uint16_t>& s,
                     uint64_t* r,
                     uint8_t last,
                     std::unordered_map<uint64_t, std::vector<uint16_t>>& values_map);

template void
arrInformationScores(std::vector<uint32_t>& s,
                     uint64_t* r,
                     uint8_t last,
                     std::unordered_map<uint64_t, std::vector<uint32_t>>& values_map);

template void
arrInformationScores(std::vector<uint64_t>& s,
                     uint64_t* r,
                     uint8_t last,
                     std::unordered_map<uint64_t, std::vector<uint64_t>>& values_map);

template void
arrInformationScores(std::vector<uint16_t>& s,
                     uint32_t* r,
                     uint8_t last,
                     std::unordered_map<uint32_t, std::vector<uint16_t>>& values_map);

template void
arrInformationScores(std::vector<uint32_t>& s,
                     uint32_t* r,
                     uint8_t last,
                     std::unordered_map<uint32_t, std::vector<uint32_t>>& values_map);

template uint64_t
mapArgmax(std::map<uint64_t, uint64_t>& val_counts, uint64_t n, bool reverse);

template uint32_t
mapArgmax(std::map<uint32_t, uint64_t>& val_counts, uint64_t n, bool reverse);

template uint16_t
mapArgmax(std::map<uint16_t, uint64_t>& val_counts, uint64_t n, bool reverse);

template uint8_t
mapArgmax(std::map<uint8_t, uint64_t>& val_counts, uint64_t n, bool reverse);