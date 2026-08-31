#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8060147C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r31_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8060147C;

loc_8060147C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 384));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8060149C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80601504;
    }
}

loc_806014A0:
{
    r4 = MemoryInline::FlatRead32((r3 + 372));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_806014A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80601504;
    }
}

loc_806014AC:
{
}

loc_806014B0:
{
    r31 = MemoryInline::FlatRead32((r3 + 376));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_806014C4;
    }
}

loc_806014B8:
{
}

loc_806014BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_806014DC;
    }
}

loc_806014C0:
{
    goto loc_806014F0;
}

loc_806014C4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    // inline leaf 0x8061B358 (8 guest instruction(s))
}

loc_inl0_0x8061B358:
{
}

loc_inl0_0x8061B35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl0_0x8061B368;
    }
}

loc_inl0_0x8061B360:
{
    r3 = 0;
    goto loc_inl0_cont_8061B358;
}

loc_inl0_0x8061B368:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_8061B358:
{
    // end of inlined leaf 0x8061B358
    MemoryInline::FlatWrite32((r30 + 376), r3);
    goto loc_806014F0;
}

loc_806014DC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    // inline leaf 0x8061B378 (8 guest instruction(s))
}

loc_inl1_0x8061B378:
{
}

loc_inl1_0x8061B37C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl1_0x8061B388;
    }
}

loc_inl1_0x8061B380:
{
    r3 = 0;
    goto loc_inl1_cont_8061B378;
}

loc_inl1_0x8061B388:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_inl1_cont_8061B378:
{
    // end of inlined leaf 0x8061B378
    MemoryInline::FlatWrite32((r30 + 376), r3);
}

loc_806014F0:
{
    r0 = MemoryInline::FlatRead32((r30 + 376));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r31));
}

loc_806014F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80601504;
    }
}

loc_806014FC:
{
    r3 = r30;
    ctx->lr = 0x80601504u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806015A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80601504:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r30 + 372));
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8061B3CCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3 = (r30 + 152);
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r31 = (r31_rot_0 & 134217727);
    r4 = 3;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r5 = 0x80890000u;
    r4 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 26592));
    ctx->lr = 0x8060153Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8060147C func_8060147C preserves=true fpr_mask=0x00000000
