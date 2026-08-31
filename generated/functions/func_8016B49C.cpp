#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016B49C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8016B49C;

loc_8016B49C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    // inline leaf 0x80170C90 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80170C90
    r31 = r3;
    r3 = r29;
    // inline leaf 0x80170CB0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 31));
    r3 = (r0 & 1);
    // end of inlined leaf 0x80170CB0
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(29));
    r0 = (r0_rot_0 & -536870912);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r0 = (r0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(7));
}

loc_8016B4DC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -1);
    r30 = (r0 + r4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016B548;
    }
}

loc_8016B4E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8016B4F8;
    }
}

loc_8016B4EC:
{
}

loc_8016B4F0:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(6))) {
        goto loc_8016B504;
    }
}

loc_8016B4F4:
{
    goto loc_8016B548;
}

loc_8016B4F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(11));
}

loc_8016B4FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8016B548;
    }
}

loc_8016B500:
{
    goto loc_8016B534;
}

loc_8016B504:
{
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016B508:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016B520;
    }
}

loc_8016B50C:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r3 = (r3 + r0);
    r3 = (r3 + 856);
    goto loc_8016B574;
}

loc_8016B520:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r3 + r0);
    r3 = (r3 + 728);
    goto loc_8016B574;
}

loc_8016B534:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r3 = (r3 + r0);
    r3 = (r3 + 600);
    goto loc_8016B574;
}

loc_8016B548:
{
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016B54C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016B564;
    }
}

loc_8016B550:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r3 = (r3 + r0);
    r3 = (r3 + 728);
    goto loc_8016B574;
}

loc_8016B564:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & -16);
    r3 = (r3 + r0);
    r3 = (r3 + 600);
}

loc_8016B574:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001F gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8016B49C func_8016B49C preserves=true fpr_mask=0x00000000
