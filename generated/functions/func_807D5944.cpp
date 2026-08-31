#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D5944(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807D5944;

loc_807D5944:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 29696);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    // inline leaf 0x8078DDB4 (12 guest instruction(s))
}

loc_inl0_0x8078DDB4:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r0 = MemoryInline::FlatRead8((r4 + 12092));
}

loc_inl0_0x8078DDC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8078DDDC;
    }
}

loc_inl0_0x8078DDC8:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10504));
    r0 = MemoryInline::FlatRead8((r4 + 76));
}

loc_inl0_0x8078DDD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8078DDDC:
{
    r3 = 1;
    goto loc_inl0_cont_8078DDB4;
}

loc_inl0_return:
{
}

loc_inl0_cont_8078DDB4:
{
    // end of inlined leaf 0x8078DDB4
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    MemoryInline::FlatWrite8((r30 + 573), static_cast<uint8_t>(r0));
    // inline leaf 0x807C6A0C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 214));
    // end of inlined leaf 0x807C6A0C
    MemoryInline::FlatWrite8((r30 + 574), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 326));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D598C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D5998;
    }
}

loc_807D5990:
{
    r3 = 0;
    goto loc_807D59FC;
}

loc_807D5998:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D3054u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_807D59A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D59AC;
    }
}

loc_807D59A4:
{
    r3 = 1;
    goto loc_807D59FC;
}

loc_807D59AC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_1 = (r30 + 1060);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_1));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 196));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1068));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f2.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f2.d, f2.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_807D59CC:
{
    r0 = cr;
    r3 = 1;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_807D59D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f1.d = PPC_PsToScalarInline(f1.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_807D59FC;
    }
}

loc_807D59DC:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1108));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 200));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D59EC:
{
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
}

loc_807D59F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_807D59FC;
    }
}

loc_807D59F8:
{
    r3 = 0;
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_807D59FC:
{
    MemoryInline::FlatWrite8((r30 + 1008), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 326));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D5A0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D5A18;
    }
}

loc_807D5A10:
{
    r3 = 0;
    goto loc_807D5A7C;
}

loc_807D5A18:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D30A4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D5A20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D5A2C;
    }
}

loc_807D5A24:
{
    r3 = 1;
    goto loc_807D5A7C;
}

loc_807D5A2C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_3 = (r30 + 1072);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_3));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 204));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1080));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f2.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f2.d, f2.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_807D5A4C:
{
    r0 = cr;
    r3 = 1;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D5A58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D5A7C;
    }
}

loc_807D5A5C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1112));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 208));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D5A6C:
{
    r0 = cr;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D5A74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D5A7C;
    }
}

loc_807D5A78:
{
    r3 = 0;
}

loc_807D5A7C:
{
    MemoryInline::FlatWrite8((r30 + 1009), static_cast<uint8_t>(r3));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000B gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D5944 func_807D5944 preserves=true fpr_mask=0x00000000
