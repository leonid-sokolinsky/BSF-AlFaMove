/*==============================================================================
Project: LiFe
Theme:  Theme: Surface movement method (No MPI)
Module: Problem-Parameters.h (Problem Parameters)
Prefix: PP
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/
//-------------------------- Compilation Modes -----------------------
//#define PP_DEBUG
#define OUTPUT
#define PP_PATH "C:/TEMP/"
//#define PP_PATH "D:/YandexDisk/_private/Programming/LP-Problems/"
//#define PP_PATH "Problems/"
//#define PP_USE_LEASTPROJECTION

//=========================== Problem Parameters =========================

/*============================== rnd3-0-1 LP problem ==============================*
// Solution:   200		200		100
#define PP_PROBLEM_NAME	"rnd3-0-1"
#define PP_M 4		// Number of equations (number of rows in *.mtx)
#define PP_N 7		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_ZERO_DIR				PP_EPS_ZERO		// Accuracy for comparison with zero
#define PP_OPTIMAL_OBJ_VALUE		1100			// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd3-3-1 LP problem ==============================*
// Solution:   38.340303295476986		200		200
#define PP_PROBLEM_NAME	"rnd3-3-1"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 9		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_ZERO_DIR				PP_EPS_ZERO		// Accuracy for comparison with zero
#define PP_OPTIMAL_OBJ_VALUE		1115.0209098864	// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	10				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd4-0-1 LP problem ==============================*
// Solution:   100   200   200   200
#define PP_PROBLEM_NAME	"rnd4-0-1"
#define PP_M 5		// Number of equations (number of rows in *.mtx)
#define PP_N 9		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_ZERO_DIR				PP_EPS_ZERO		// Accuracy for comparison with zero
#define PP_OPTIMAL_OBJ_VALUE		1900			// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd4-4-1 LP problem ==============================*
// Solution:   70.020493427    200    142.925358841    111.7199061746
#define PP_PROBLEM_NAME	"rnd4-4-1"
#define PP_M 8		// Number of equations (number of rows in *.mtx)
#define PP_N 12		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_ZERO_DIR				PP_EPS_ZERO		// Accuracy for comparison with zero
#define PP_OPTIMAL_OBJ_VALUE		1480.5369695509	// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd5-0-1 LP problem ==============================*
// Solution:   100   200   200   200   200
#define PP_PROBLEM_NAME	"rnd5-0-1"
#define PP_M 6		// Number of equations (number of rows in *.mtx)
#define PP_N 11		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_ZERO_DIR				PP_EPS_ZERO	// Accuracy for comparison with zero
#define PP_OPTIMAL_OBJ_VALUE		2900			// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	1				// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd5-5-1 LP problem ==============================*
// Solution:   Not solved!
#define PP_PROBLEM_NAME	"rnd5-5-1"
#define PP_M 10		// Number of equations (number of rows in *.mtx)
#define PP_N 15		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_ZERO_DIR				PP_EPS_ZERO		// Accuracy for comparison with zero
#define PP_OPTIMAL_OBJ_VALUE		0			// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	100			// Starting length of Objective Vector
//------------------------------------------------------------------/**/

/*============================== rnd5-5-2 LP problem ==============================*/
// Solution:   26.847787814   200   200   6.427921593   200
#define PP_PROBLEM_NAME	"rnd5-5-2"
#define PP_M 10		// Number of equations (number of rows in *.mtx)
#define PP_N 15		// Number of variables (number of cols in *.mtx)
//------------------------------------------------------------------
#define PP_EPS_ZERO					1E-8			// Accuracy for comparison with zero
#define PP_EPS_ZERO_DIR				PP_EPS_ZERO		// Accuracy for comparison with zero
#define PP_OPTIMAL_OBJ_VALUE		2233.2757094184	// Exact maximum value of objective function
#define PP_INFINITY					1E+308			// Highest bound in *_hi.mtx
#define PP_OBJECTIVE_VECTOR_LENGTH	10			// Starting length of Objective Vector
//------------------------------------------------------------------/**/

//================================ Common Paramrters ===========================
#define PP_MM (2*(PP_M+PP_N))	// Maximal number of inequalities
#define PP_KK 1024				// Maximal number of hyperedges that include surface point: 2^10 = 1024
#define PP_MAX_NUM_SHIFTS_SAME_LENGTH	5			// Maximal number of shifts with the same length
#define PP_MAX_SHIFTS_NUMBER			1000000		// Maximum number of shifts
#define PP_MAX_ITER_COUNT				10000000000 // Maximal count of iterations
//-------------------------- Input/Outpoot Parameters ---------------------------
#define PP_OUTPUT_LIMIT	8	// Number of Elements to output
#define PP_MATRIX_OUTPUT	// To output Matrix
#define PP_SETW 16
//------------------------- Matrix format ----------------
#define PP_MTX_PREFIX			"lp_"
#define PP_MTX_POSTFIX_A		".mtx"
#define PP_MTX_POSTFIX_B		"_b.mtx"
#define PP_MTX_POSTFIX_LO		"_lo.mtx"
#define PP_MTX_POSTFIX_HI		"_hi.mtx"
#define PP_MTX_POSTFIX_C		"_c.mtx"
#define PP_MTX_POSTFIX_SP		"_sp.mtx" // Surface point
#define PP_MTX_POSTFIX_TR		"_tr.mtx" // Trace
//-------------------------- Jobs  -----------------------
#define PP_JOB_GET_MAX_SUBSET	0 
//-------------------------- Process states --------------------------
#define PP_STATE_GET_NEXT_POINT						0
//------------- Vector Projection Onto Halfspace exit codes -------------
#define PP_EXITCODE_DEGENERATE_INEQUALITY	0
#define PP_EXITCODE_INSIDE_HALFSPACE		1
#define PP_EXITCODE_TRUE_PROJECTING	2
#define PP_EXITCODE_PARALLEL				3
#define PP_EXITCODE_RECESSIVE				4
#define PP_EXITCODE_ON_HYPERPLANE			5