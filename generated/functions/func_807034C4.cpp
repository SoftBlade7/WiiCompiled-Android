#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807028E4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_807028E4_statefree_v0(uint32_t);

extern "C" void func_807034C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807034C4;

loc_807034C4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 156));
}

loc_807034F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(240))) {
        goto loc_80703504;
    }
}

loc_807034FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(242));
}

loc_80703500:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703540;
    }
}

loc_80703504:
{
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + 7736));
    r5 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(45));
}

loc_80703518:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703540;
    }
}

loc_8070351C:
{
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + 10232));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_8070352C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703540;
    }
}

loc_80703530:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(620));
}

loc_80703534:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703540;
    }
}

loc_80703538:
{
    r3 = 0;
    goto loc_807036A8;
}

loc_80703540:
{
    r31 = 0;
    r3 = (r3 + 148);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807028E4u) && KnownTranslatedCpuCall<0x807028E4u>::kAvailable && !KnownTranslatedCpuCall<0x807028E4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807028E4u>()) {
        const auto state_free_result_807028E4_C2D = func_807028E4_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_807028E4_C2D[0]);
        r3 = static_cast<uint32_t>(state_free_result_807028E4_C2D[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x807028E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80703550:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8070355C;
    }
}

loc_80703554:
{
    r31 = 0;
    goto loc_80703638;
}

loc_8070355C:
{
    r4 = MemoryInline::FlatRead32((r29 + 128));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80703568:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070358C;
    }
}

loc_8070356C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703578;
    }
}

loc_80703570:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070357C;
}

loc_80703578:
{
    r0 = -1;
}

loc_8070357C:
{
}

loc_80703580:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_8070358C;
    }
}

loc_80703584:
{
    r3 = (r29 + 128);
    goto loc_8070360C;
}

loc_8070358C:
{
    r4 = MemoryInline::FlatRead32((r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80703594:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807035B8;
    }
}

loc_80703598:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807035A4;
    }
}

loc_8070359C:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807035A8;
}

loc_807035A4:
{
    r0 = -1;
}

loc_807035A8:
{
}

loc_807035AC:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_807035B8;
    }
}

loc_807035B0:
{
    r3 = (r29 + 132);
    goto loc_8070360C;
}

loc_807035B8:
{
    r4 = MemoryInline::FlatRead32((r29 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807035C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807035E4;
    }
}

loc_807035C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807035D0;
    }
}

loc_807035C8:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807035D4;
}

loc_807035D0:
{
    r0 = -1;
}

loc_807035D4:
{
}

loc_807035D8:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_807035E4;
    }
}

loc_807035DC:
{
    r3 = (r29 + 136);
    goto loc_8070360C;
}

loc_807035E4:
{
    r4 = MemoryInline::FlatRead32((r29 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807035EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070360C;
    }
}

loc_807035F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807035FC;
    }
}

loc_807035F4:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80703600;
}

loc_807035FC:
{
    r0 = -1;
}

loc_80703600:
{
}

loc_80703604:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_8070360C;
    }
}

loc_80703608:
{
    r3 = (r29 + 140);
}

loc_8070360C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703610:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703638;
    }
}

loc_80703614:
{
    r12 = MemoryInline::FlatRead32(r29);
    r5 = 0x808A0000u;
    r3 = r29;
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 224));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 5800));
    ctr = r12;
    ctx->lr = 0x80703634u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r31 = r3;
}

loc_80703638:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8070363C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807036A4;
    }
}

loc_80703640:
{
    r3 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703648:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807036A4;
    }
}

loc_8070364C:
{
    r0 = MemoryInline::FlatRead16((r29 + 156));
}

loc_80703654:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(240))) {
        goto loc_80703660;
    }
}

loc_80703658:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(242));
}

loc_8070365C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807036A4;
    }
}

loc_80703660:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(625));
}

loc_80703664:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807036A4;
    }
}

loc_80703668:
{
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 5804));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80703674:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80703680;
    }
}

loc_80703678:
{
    f31.d = f0.d;
    goto loc_80703690;
}

loc_80703680:
{
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 5800));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8070368C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807036A4;
    }
}

loc_80703690:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703694:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807036A4;
    }
}

loc_80703698:
{
    f1.d = f31.d;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_807036A4:
{
    r3 = r31;
}

loc_807036A8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 52));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807034C4 func_807034C4 preserves=false fpr_mask=0x80000000
