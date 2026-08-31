#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051730(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80051730;

loc_80051730:
{
    r11 = (r4 & 1);
    r0 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80051738:
{
    r0 = (r11 * 20);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80051750;
    }
}

loc_80051748:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_80051754;
}

loc_80051750:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_80051754:
{
}

loc_80051758:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80051764;
    }
}

loc_8005175C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
}

loc_80051764:
{
}

loc_80051768:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80051774;
    }
}

loc_8005176C:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r0 = (r0_rot_3 & 1);
    MemoryInline::FlatWrite32(r6, r0);
}

loc_80051774:
{
}

loc_80051778:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80051784;
    }
}

loc_8005177C:
{
    r0 = (r3 & 1);
    MemoryInline::FlatWrite32(r7, r0);
}

loc_80051784:
{
}

loc_80051788:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r4 = (r4_rot_0 & 15);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r0 = (r0_rot_5 & 15);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_800517A0;
    }
}

loc_80051794:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & -16);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32(r8, r0);
}

loc_800517A0:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(22));
    r0 = (r0_rot_8 & 1);
}

loc_800517A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800517B4;
    }
}

loc_800517A8:
{
    r4 = 0;
    r0 = 0;
    goto loc_800517D0;
}

loc_800517B4:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(23));
    r0 = (r0_rot_9 & 1);
}

loc_800517B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800517C8;
    }
}

loc_800517BC:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(25));
    r0 = (r0_rot_10 & 3);
    r4 = 2;
    goto loc_800517D0;
}

loc_800517C8:
{
    r4 = 1;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(25));
    r0 = (r0_rot_11 & 3);
}

loc_800517D0:
{
}

loc_800517D4:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_800517DC;
    }
}

loc_800517D8:
{
    MemoryInline::FlatWrite32(r9, r0);
}

loc_800517DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_800517E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800517E8;
    }
}

loc_800517E4:
{
    MemoryInline::FlatWrite32(r10, r4);
}

loc_800517E8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000819 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80051730 func_80051730 preserves=true fpr_mask=0x00000000
