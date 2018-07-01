#include "engine/instruction.hpp"
#include ""

namespace jvm {

	void OPnop::execute() {

	}

	void OPaconst_null::execute() {

		auto& op = fs.top().operands;
		op4 res;
		res.ui4 = 0;
		op.push4(res);
	}

	void OPiconst_m1::execute() {

	}

	void OPiconst_0::execute() {
		auto& op = fs.top().operands;
		op4 res;
		res.ui4 = 0;
		op.push4(res);
	}

	void OPiconst_1::execute() {
		auto& op = fs.top().operands;
		op4 res;
		res.ui4 = 1;
		op.push4(res);
	}

	void OPiconst_2::execute() {
		auto& op = fs.top().operands;
		op4 res;
		res.ui4 = 2;
		op.push4(res);

	}

	void OPiconst_3::execute() {
		auto& op = fs.top().operands;
		op4 res;
		res.ui4 = 3;
		op.push4(res);
	}

	void OPiconst_4::execute() {
		auto& op = fs.top().operands;
		op4 res;
		res.ui4 = 4;
		op.push4(res);
	}

	void OPiconst_5::execute() {
		auto& op = fs.top().operands;
		op4 res;
		res.ui4 = 5;
		op.push4(res);

	}

	void OPlconst_0::execute() {
		auto& op = fs.top().operands;
		op8 res;
		res.ull = 0;
		op.push8(res);
	}

	void OPlconst_1::execute() {
		auto& op = fs.top().operands;
		op8 res;
		res.ull = 1;
		op.push8(res);

	}

	void OPfconst_0::execute() {
		auto& op = fs.top().operands;
		op4 res;
		res.f = 0.0;
		op.push4(res);

	}

	void OPfconst_1::execute() {
		auto& op = fs.top().operands;
		op4 res;
		res.f = 1.0;
		op.push4(res);
	}

	void OPfconst_2::execute() {
		auto& op = fs.top().operands;
		op4 res;
		res.f = 2.0;
		op.push4(res);
	}

	void OPdconst_0::execute() {
		auto& op = fs.top().operands;
		op8 res;
		res.lf = 0.0;
		op.push8(res);
	}

	void OPdconst_1::execute() {
		auto& op = fs.top().operands;
		op8 res;
		res.lf = 1.0;
		op.push8(res);

	}

	void OPbipush::execute() {
		auto& op = fs.top().operands;
		op4 res;
		res.i1 = this->byte;
		op.push4(res);
	}

	void OPsipush::execute() {
		auto& op = fs.top().operands;
		op4 res;
		res.i2 = this->value;
		op.push4(res);
	}

	void OPldc::execute() {
		auto frame = fs.top();
		auto& op =fs.top().operands;

		auto& CurrClass = frame.cl;
		CurrClas
		op4 value;
		value.i4 =
	}

	void OPldc_w::execute() {
		auto frame = fs.top();
		auto& op = fs.top().operands;
		auto& CurrClass = frame.cl;
		cl[]

	}

	void OPldc2_w::execute() {

	}

	void OPiload::execute() {

	}

	void OPlload::execute() {

	}

	void OPfload::execute() {

	}

	void OPdload::execute() {

	}

	void OPaload::execute() {

	}

	void OPiload_0::execute() {

	}

	void OPiload_1::execute() {

	}

	void OPiload_2::execute() {

	}

	void OPiload_3::execute() {

	}

	void OPlload_0::execute() {

	}

	void OPlload_1::execute() {

	}

	void OPlload_2::execute() {

	}

	void OPlload_3::execute() {

	}

	void OPfload_0::execute() {

	}

	void OPfload_1::execute() {

	}

	void OPfload_2::execute() {

	}

	void OPfload_3::execute() {

	}

	void OPdload_0::execute() {

	}

	void OPdload_1::execute() {

	}

	void OPdload_2::execute() {

	}

	void OPdload_3::execute() {

	}

	void OPaload_0::execute() {

	}

	void OPaload_1::execute() {

	}

	void OPaload_2::execute() {

	}

	void OPaload_3::execute() {

	}

	void OPiaload::execute() {

	}

	void OPlaload::execute() {

	}

	void OPfaload::execute() {

	}

	void OPdaload::execute() {

	}

	void OPaaload::execute() {

	}

	void OPbaload::execute() {

	}

	void OPcaload::execute() {

	}

	void OPsaload::execute() {

	}

	void OPistore::execute() {

	}

	void OPlstore::execute() {

	}

	void OPfstore::execute() {

	}

	void OPdstore::execute() {

	}

	void OPastore::execute() {

	}

	void OPistore_0::execute() {

	}

	void OPistore_1::execute() {

	}

	void OPistore_2::execute() {

	}

	void OPistore_3::execute() {

	}

	void OPlstore_0::execute() {

	}

	void OPlstore_1::execute() {

	}

	void OPlstore_2::execute() {

	}

	void OPlstore_3::execute() {

	}

	void OPfstore_0::execute() {

	}

	void OPfstore_1::execute() {

	}

	void OPfstore_2::execute() {

	}

	void OPfstore_3::execute() {

	}

	void OPdstore_0::execute() {

	}

	void OPdstore_1::execute() {
	// push na pilha
	}


	void OPdstore_2::execute() {

	}

	void OPdstore_3::execute() {

	}

	void OPastore_0::execute() {

	}

	void OPastore_1::execute() {

	}

	void OPastore_2::execute() {

	}

	void OPastore_3::execute() {

	}

	void OPiastore::execute() {

	}

	void OPlastore::execute() {

	}

	void OPfastore::execute() {

	}

	void OPdastore::execute() {

	}

	void OPaastore::execute() {

	}

	void OPbastore::execute() {

	}

	void OPcastore::execute() {

	}

	void OPsastore::execute() {

	}

	void OPpop::execute() {

	}

	void OPpop2::execute() {

	}

	void OPdup::execute() {

	}

	void OPdup_x1::execute() {

	}

	void OPdup_x2::execute() {

	}

	void OPdup2::execute() {

	}

	void OPdup2_x1::execute() {

	}

	void OPdup2_x2::execute() {

	}

	void OPswap::execute() {

	}

	void OPiadd::execute() {

	}

	void OPladd::execute() {

	}

	void OPfadd::execute() {

	}

	void OPdadd::execute() {

	}

	void OPisub::execute() {

	}

	void OPlsub::execute() {

	}

	void OPfsub::execute() {

	}

	void OPdsub::execute() {

	}

	void OPimul::execute() {

	}

	void OPlmul::execute() {

	}

	void OPfmul::execute() {

	}

	void OPdmul::execute() {

	}

	void OPidiv::execute() {

	}

	void OPldiv::execute() {

	}

	void OPfdiv::execute() {

	}

	void OPddiv::execute() {

	}

	void OPirem::execute() {

	}

	void OPlrem::execute() {

	}

	void OPfrem::execute() {

	}

	void OPdrem::execute() {

	}

	void OPineg::execute() {

	}

	void OPlneg::execute() {

	}

	void OPfneg::execute() {

	}

	void OPdneg::execute() {

	}

	void OPishl::execute() {

	}

	void OPlshl::execute() {

	}

	void OPishr::execute() {

	}

	void OPlshr::execute() {

	}

	void OPiushr::execute() {

	}

	void OPlushr::execute() {

	}

	void OPiand::execute() {

	}

	void OPland::execute() {

	}

	void OPior::execute() {

	}

	void OPlor::execute() {

	}

	void OPixor::execute() {

	}

	void OPlxor::execute() {

	}

	void OPiinc::execute() {

	}


	void OPi2l::execute() {

	}

	void OPi2f::execute() {

	}

	void OPi2d::execute() {

	}

	void OPl2i::execute() {

	}

	void OPl2f::execute() {

	}

	void OPl2d::execute() {

	}

	void OPf2i::execute() {

	}

	void OPf2l::execute() {

	}

	void OPf2d::execute() {

	}

	void OPd2i::execute() {

	}

	void OPd2l::execute() {

	}

	void OPd2f::execute() {

	}

	void OPi2b::execute() {

	}

	void OPi2c::execute() {

	}

	void OPi2s::execute() {

	}

	void OPlcmp::execute() {

	}

	void OPfcmpl::execute() {

	}

	void OPfcmpg::execute() {

	}

	void OPdcmpl::execute() {

	}

	void OPdcmpg::execute() {

	}

	void OPifeq::execute() {

	}

	void OPifne::execute() {

	}

	void OPiflt::execute() {

	}

	void OPifge::execute() {

	}

	void OPifgt::execute() {

	}

	void OPifle::execute() {

	}

	void OPif_icmpeq::execute() {

	}

	void OPif_icmpne::execute() {

	}

	void OPif_icmplt::execute() {

	}

	void OPif_icmpge::execute() {

	}

	void OPif_icmpgt::execute() {

	}

	void OPif_icmple::execute() {

	}

	void OPif_acmpeq::execute() {

	}

	void OPif_acmpne::execute() {

	}

	void OPgoto::execute() {

	}

	void OPjsr::execute() {

	}

	void OPret::execute() {

	}

	void OPtableswitch::execute() {

	}

	void OPlookupswitch::execute() {

	}

	void OPireturn::execute() {

	}

	void OPlreturn::execute() {

	}

	void OPfreturn::execute() {

	}

	void OPdreturn::execute() {

	}

	void OPareturn::execute() {

	}

	void OPreturn::execute() {

	}

	void OPgetstatic::execute() {

	}

	void OPputstatic::execute() {

	}

	void OPgetfield::execute() {

	}

	void OPputfield::execute() {

	}

	void OPinvokevirtual::execute() {

	}

	void OPinvokespecial::execute() {

	}

	void OPinvokestatic::execute() {

	}

	void OPinvokeinterface::execute() {

	}

	void OPinvokedynamic::execute() {

	}

	void OPnew::execute() {

	}

	void OPnewarray::execute() {

	}

	void OPanewarray::execute() {

	}

	void OParraylength::execute() {

	}

	void OPathrow::execute() {

	}

	void OPcheckcast::execute() {

	}

	void OPinstanceof::execute() {

	}

	void OPmonitorenter::execute() {

	}

	void OPmonitorexit::execute() {

	}

	void OPwide::execute() {

	}

	void OPmultianewarray::execute() {

	}

	void OPifnull::execute() {

	}

	void OPifnonnull::execute() {

	}

	void OPgoto_w::execute() {

	}

	void OPjsr_w::execute() {

	}

	void OPbreakpoint::execute() {

	}

	void OPimpdep1::execute() {

	}

	void OPimpdep2::execute() {

	}

};
