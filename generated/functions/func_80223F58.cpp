#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80037570_statefree(uint32_t, uint32_t);

extern "C" void func_80223F58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80223F58;

loc_80223F58:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    r3 = (r3 + 116);
    // inline leaf 0x800375C0 (11 guest instruction(s))
}

loc_inl0_0x800375C0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_0x800375C8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800375D4;
    }
}

loc_inl0_0x800375CC:
{
    r3 = 0;
    goto loc_inl0_cont_800375C0;
}

loc_inl0_0x800375D4:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_inl0_cont_800375C0:
{
    // end of inlined leaf 0x800375C0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80223F78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802240A4;
    }
}

loc_80223F7C:
{
    r3 = (r31 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl1_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x80037604;
    }
}

loc_inl1_0x800375FC:
{
    r0 = 0;
    goto loc_inl1_0x80037618;
}

loc_inl1_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_inl1_0x80037618:
{
}

loc_inl1_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80037628;
    }
}

loc_inl1_0x80037620:
{
    r3 = r4;
    goto loc_inl1_cont_800375F0;
}

loc_inl1_0x80037628:
{
    r3 = 0;
}

loc_inl1_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
}

loc_80223F88:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80223F94;
    }
}

loc_80223F8C:
{
    r3 = 0;
    goto loc_80223F98;
}

loc_80223F94:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80223F98:
{
}

loc_80223F9C:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80223FAC;
    }
}

loc_80223FA4:
{
}

loc_80223FA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80223FB0;
    }
}

loc_80223FAC:
{
    r0 = 1;
}

loc_80223FB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80223FB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80224098;
    }
}

loc_80223FB8:
{
    r0 = MemoryInline::FlatRead32((r31 + 40));
    r0 = (r0 & 2);
}

loc_80223FC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80223FD4;
    }
}

loc_80223FC4:
{
    r3 = (r31 + 68);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x80199D30u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    goto loc_80223FDC;
}

loc_80223FD4:
{
    r3 = (r1 + 8);
    // inline leaf 0x80199D04 (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26416));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 16);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_4, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_5, f2.d);
    // end of inlined leaf 0x80199D04
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_80223FDC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 40), 0, 28u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 40));
    r0 = (r0 & 4);
}

loc_80223FE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80224060;
    }
}

loc_80223FE8:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f3.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f2.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 48));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f5.d = PpcFmulsInline(f0.d, f6.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f4.d = PpcFmulsInline(f4.d, f6.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f3.d = PpcFmulsInline(f3.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 52));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
}

loc_80224060:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 40));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80224068:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80224084;
    }
}

loc_8022406C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 56));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 60));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 64));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
}

loc_80224084:
{
    r3 = (r31 + 116);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800375F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r4 = (r1 + 8);
    ctx->lr = 0x80224094u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80026F30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    goto loc_802240A4;
}

loc_80224098:
{
    r3 = (r31 + 116);
    r4 = (r13 + -24024);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80037570u) && KnownTranslatedCpuCall<0x80037570u>::kAvailable && !KnownTranslatedCpuCall<0x80037570u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80037570u>()) {
        const auto state_free_result_80037570_28B0 = func_80037570_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80037570_28B0[0]);
        r5 = static_cast<uint32_t>(state_free_result_80037570_28B0[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80037570u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_802240A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800201F gpr_write=0xF800083B gpr_return=0x00000018 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80223F58 func_80223F58 preserves=true fpr_mask=0x00000000
