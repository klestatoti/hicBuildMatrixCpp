#include "hicbuildmatrix.hpp"

HiCBuildMatrix::HiCBuildMatrix(const std::string &pForwardRead, const std::string &pReverseRead) {
    mForwardRead = pForwardRead;
    mReverseRead = pReverseRead;
}

bool HiCBuildMatrix::is_duplicacted(const std::string &pchrom1, const int &pstart1, const std::string &pchrom2,const int &pstart2) {
//    std::set<string> pos_matrix;
//    mchrom1 = pchrom1;
//    mstart1 = pstart1;
//    mchrom2 = pchrom2;
//    mstart2 = pstrt2;
//     if(mchrom1< mchrom2) {
//         string id_string= Format("___ - ___", "mchrom1","mchrom2");
//     }
//     else {
//         string id_string=Format("___ - ___", "mchrom2","mchrom1");
//     }
//     if (mstart1 < mstart2){
//         string id_string= Format("___ - ___", "mstart1","mstart2");
//     }
//     else {
//          string id_string= Format("___ - ___", "mstart2","mstart1");
//     }
//     if (pos_matrix.count(id_string)) {
//         return 1;
//    // id_string is in the set, count is 1
// } else {
//     pos_matrix.insert(id_string);
//    // count zero, i.e. id_string not in the set
// }
    return true;
}
size_t HiCBuildMatrix::readBamFile(int &pNumberOfItemsPerBuffer, bool &pSkipDuplicationCheck, std::vector<int> &pRefId2name) {
    
//    // Open input stream, BamStream can read SAM and BAM files.
//     seqan::BamStream bamStreamIn1("R1.sam");
//     seqan::BamStream bamStreamIn2("R2.sam");
//     std::vector<BamAlignmentRecord> buffer_mate1;
//     std::vector<BamAlignmentRecord> buffer_mate2;
//     std::vector<BamAlignmentRecord>  mate_bins;
//     int duplicated_pairs = 0;
//     int one_mate_unmapped = 0;
//     int one_mate_not_unique = 0;
//     int one_mate_low_quality = 0;
//     bool  all_data_read=0;
//     int j=0;
//     int iter_num = 0;
//     mSkipDublicationCheck = pSkipDuplicationCheck;
//     read_pos_matrix = HiCBuildMatrix();
//     pReadPosMatrix = read_pos_matrix;
//     bool mate_is_unasigned = 0;
//     int pMinMappingQuality;
//     bool  pKeepSelfCircles ;
//     string pRestrictionSequence;
//     int pMatrixSize;
//    // unordered_map<string, int> pDanglingSequences ; 
//     int pBinsize;
//     int  pResultIndex;
//     int start = 0;
//     int end;
//     vector<string> pSharedBinIntvalTree;
//     if (!isGood(bamStreamIn1))
//     {
//         std::cerr << "ERROR: Could not open the first file!\n";
//         return 1;
//     }
//      else if (!isGood(bamStreamIn2))
//     {
//         std::cerr << "ERROR: Could not open the second file!\n";
//         return 1;
//     }
    
//     // Open output stream, "-" means stdin on if reading, else stdout.
//     seqan::BamStream bamStreamOut1("-", seqan::BamStream::WRITE);
//     seqan::BamStream bamStreamOut2("-", seqan::BamStream::WRITE);
  
//     // Copy header.  The header is automatically written out before
//     // the first record.
//     bamStreamOut1.header = bamStreamIn1.header;
//     bamStreamOut2.header = bamStreamIn2.header;

//     seqan::BamAlignmentRecord record1;
//     seqan::  BamAlignmentRecord record2;
//  while(j< pNumberOfItemsPerBuffer){
//             readRecord(record1, bamStreamIn1);
//              readRecord(record2, bamStreamIn2); 
//         }
//          all_data_read = 1;
//             break; 
// iter_num += 1;

//     while (!atEnd(bamStreamIn1) && !atEnd(bamStreamIn2))
//     {
//         readRecord(record1, bamStreamIn1);
//         while ((hasFlagAllProper(record1)==1) & 256 == 256) {
//             readRecord(record1, bamStreamIn1);
            
//         }
//           all_data_read =1;
//             break; 
//         readRecord(record2, bamStreamIn2);
//         while ((hasFlagAllProper(record2)==1)  & 256 == 256) {
//             readRecord(record2, bamStreamIn2);    
//         }
//     }
      
// assert(record1.qName == record2.qName && "Be sure that the sam files have the same read order ");
// // if any of the reads is not mapped
//    if(((hasFlagAllProper(record1)==1) && 0x4 == 4)|| ((hasFlagAllProper(record2)==1) && 0x4 == 4)){
//        one_mate_unmapped += 1;
//    }
//    // if the read quality is low, higher probabilities of error
//     if(record1.mapQ < pMinMappingQuality || record2.mapQ < pMinMappingQuality){
//         if(record1.mapQ ==0 && record2.mapQ==0) {
//             one_mate_not_unique += 1;
//         }
//     }
//   if(pSkipDuplicationCheck == 0){
//             if pReadPosMatrix.is_duplicated(get<record1.rname>(pRefId2name), record1.pos,  
//             get<record2.rname>(pRefId2na),record2.pos)){
//                duplicated_pairs += 1; 

//             }
//   }  
//   buffer_mate1.push_back(record1);
//   buffer_mate2.push_back(record2);
//   j += 1;
//   if(((all_data_read !=0) && (getAlignmentLengthInRef(record1) !=0)) && getAlignmentLengthInRef(record2) !=0) {
//        return buffer_mate1, buffer_mate2, 1 , duplicated_pairs, 
//        one_mate_unmapped, one_mate_not_unique, one_mate_low_quality, 
//        iter_num - len(buffer_mate1);
// }
//  if (all_data_read ==0 and buffer_mate1.size() == 0) || (buffer_mate2.size() == 0){
//      return Null, Null, 1, duplicated_pairs, 
//      one_mate_unmapped, one_mate_not_unique, one_mate_low_quality, 
//      iter_num - len(buffer_mate1);
//  }
//   else return buffer_mate1, buffer_mate2, 0, duplicated_pairs, one_mate_unmapped, 
//   one_mate_not_unique, one_mate_low_quality, iter_num - len(buffer_mate1);
// while (!atEnd(bamStreamIn1) && !atEnd(bamStreamIn2))
//     {
//         readRecord(record1, bamStreamIn1);
//         mate_ref=get<record1.rname>(pRefId2name);
//         readRecord(record2, bamStreamIn2); 
//         mate_ref=get<record2.rname>(pRefId2name);
//         read_middle=record1.pos + int(record1.tLen /2);
//         middle_pos = int((start + end) / 2);
       
//         vector<string> middle_position_element;
//         string x = pSharedBinIntvalTree[middle_pos];
//         for( int i=0 ; i<middle_position_element.size(); i++) {
//             for( int j=0;j< pSharedBinIntvalTree.size();j++) {
//                 if(pSharedBinIntvalTree[j]==x) {
//                      middle_position_element.insert(x);
//                 }
//             }
//         }
//      while(!start>end){
//          if((middle_position_element.begin() <= read_middle) && (read_middle <= middle_position_element.end())){
//              mate_bin = x;
//                         mate_is_unasigned = 0;
//          }
//          else if (middle_position_element.begin() <=read_middle) {
//              end = middle_pos - 1;
//                         middle_pos = int((start + end) / 2);
//                         mate_is_unasigned = 1;
//          }
//          else {
//               start = middle_pos + 1;
//                         middle_pos = int((start + end) / 2);
//                         mate_is_unasigned = 1;
//          }
//     } 
//  try
//   {
//     throw  mate_is_unasigned = 1;
//   }
//   catch (...)
//   {
//     cout << "An exception occurred.";
//   }
//  if(mate_bin == NULL) {
//       mate_is_unasigned = 1;
//       break;
//  }

    return 0; 
}


size_t HiCBuildMatrix::createInitialStructures() {

    // open bam files
    // read sizes of chromosomes
    // get funciton from seqan
    // get a list [chromosomename, size of chromosome]
    // std::unordered_map<String, IntervalTree> 
    // Get intervaltree from https://github.com/ekg/intervaltree
    // per chromosome from 0 to binSize and always increase by binSize value

    // std::unordered_map<std::string, Interval<int, int, int> > intervals;
    
    std::unordered_map<std::string, IntervalTree<size_t, size_t> > intervalTree;
    size_t numberOfChromosomes = 22; // TODO:  get number of chromosomes
    size_t lengthOfChromosome = 0;
    size_t binSize = 10000; // TODO: get real bin size as a parameter from python
    size_t counter = 0;
    std::string chromosomeName;
    for (size_t i = 0; i < numberOfChromosomes; ++i) {
        std::vector<Interval<size_t, size_t> > intervals;
        lengthOfChromosome = 220000000; // TODO: get real value for the specific chromosome
        counter = 0;
        chromosomeName = 'chr1'; // TODO: get real chromosome name for specific chromosome
        for (size_t j = 0; j < lengthOfChromosome; j = j + binSize) {
            intervals.push_back(Interval<size_t, size_t>(j, j + binSize, counter));
            counter++;
        }
        IntervalTree<size_t, int> tree;
        intervalTree[chromosomeName] = IntervalTree<size_t, size_t>(std::move(intervals));
    }

    // intervals.push_back(Interval<size_t, int>(2, 10, 1));
    // intervals.push_back(Interval<size_t, int>(3, 4, 2));
    // intervals.push_back(Interval<size_t,int>(20, 100, 3));
    // IntervalTree<size_t, int> tree;
    // tree = IntervalTree<size_t, int>(std::move(intervals));

    // std::vector<Interval<size_t, int> > results;
    // auto results  = tree.findContained(3, 5 );
    // std::cout << "found " << results.size() << " overlapping intervals" << std::endl;
    return 0;
}