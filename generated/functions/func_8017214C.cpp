#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017214C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mdest_2 = 0;
    uint32_t r8_mdest_3 = 0;
    uint32_t r8_mdest_4 = 0;
    uint32_t r8_mdest_5 = 0;
    uint32_t r8_mdest_6 = 0;
    uint32_t r8_mdest_7 = 0;
    uint32_t r8_mdest_8 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;
    uint32_t r8_mrot_2 = 0;
    uint32_t r8_mrot_3 = 0;
    uint32_t r8_mrot_4 = 0;
    uint32_t r8_mrot_5 = 0;
    uint32_t r8_mrot_6 = 0;
    uint32_t r8_mrot_7 = 0;
    uint32_t r8_mrot_8 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint32_t r9_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
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

    goto loc_8017214C;

loc_8017214C:
{
    r11 = (r5 & -257);
    r7 = 8;
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & 1);
    r10 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = (r11 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r11) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r8 = (r8_rot_0 & -4);
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r7 + r0_ca_0);
    r9 = (r9 + r3);
    r7 = (r10 + r8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(8));
}

loc_80172174:
{
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & -4);
    r0_subfic_ra_0 = r0;
    r0 = (8 - r0_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r0_subfic_ra_0) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite32((r7 + 1444), r5);
    r7 = (r10 + r8);
    r9 = (r11 & ~r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801721A8;
    }
}

loc_8017218C:
{
    r0 = 1;
    r8 = MemoryInline::FlatRead32((r10 + 1512));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r4 = 0;
    r0 = (r8 & ~r0);
    MemoryInline::FlatWrite32((r10 + 1512), r0);
    goto loc_801721BC;
}

loc_801721A8:
{
    r0 = 1;
    r8 = MemoryInline::FlatRead32((r10 + 1512));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r0 = (r8 | r0);
    MemoryInline::FlatWrite32((r10 + 1512), r0);
}

loc_801721BC:
{
    r0 = (r3 & 1);
}

loc_801721C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80172220;
    }
}

loc_801721C4:
{
    r8 = MemoryInline::FlatRead32((r7 + 336));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(12));
    r8_mrot_0 = (r8_rot_2 & 28672);
    r8_mdest_0 = (r8 & -28673);
    r8 = (r8_mdest_0 | r8_mrot_0);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(15));
    r8_mrot_1 = (r8_rot_3 & 229376);
    r8_mdest_1 = (r8 & -229377);
    r8 = (r8_mdest_1 | r8_mrot_1);
}

loc_801721D4:
{
    MemoryInline::FlatWrite32((r7 + 336), r8);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(255))) {
        goto loc_801721E4;
    }
}

loc_801721DC:
{
    r0 = 7;
    goto loc_801721F4;
}

loc_801721E4:
{
    r3 = 0x80290000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -23024);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
}

loc_801721F4:
{
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(19));
    r8_mrot_2 = (r8_rot_4 & 3670016);
    r8_mdest_2 = (r8 & -3670017);
    r8 = (r8_mdest_2 | r8_mrot_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(255));
}

loc_801721FC:
{
    MemoryInline::FlatWrite32((r7 + 336), r8);
    r3 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80172214;
    }
}

loc_80172208:
{
    r0 = (r5 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017220C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80172214;
    }
}

loc_80172210:
{
    r3 = 1;
}

loc_80172214:
{
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(18));
    r8_mrot_3 = (r8_rot_5 & 262144);
    r8_mdest_3 = (r8 & -262145);
    r8 = (r8_mdest_3 | r8_mrot_3);
    MemoryInline::FlatWrite32((r7 + 336), r8);
    goto loc_80172278;
}

loc_80172220:
{
    r8 = MemoryInline::FlatRead32((r7 + 336));
    r8_mrot_4 = (r9 & 7);
    r8_mdest_4 = (r8 & -8);
    r8 = (r8_mdest_4 | r8_mrot_4);
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r8_mrot_5 = (r8_rot_6 & 56);
    r8_mdest_5 = (r8 & -57);
    r8 = (r8_mdest_5 | r8_mrot_5);
}

loc_80172230:
{
    MemoryInline::FlatWrite32((r7 + 336), r8);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(255))) {
        goto loc_80172240;
    }
}

loc_80172238:
{
    r0 = 7;
    goto loc_80172250;
}

loc_80172240:
{
    r3 = 0x80290000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + -23024);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_3);
}

loc_80172250:
{
    r8_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r8_mrot_6 = (r8_rot_7 & 896);
    r8_mdest_6 = (r8 & -897);
    r8 = (r8_mdest_6 | r8_mrot_6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(255));
}

loc_80172258:
{
    MemoryInline::FlatWrite32((r7 + 336), r8);
    r3 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80172270;
    }
}

loc_80172264:
{
    r0 = (r5 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80172268:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80172270;
    }
}

loc_8017226C:
{
    r3 = 1;
}

loc_80172270:
{
    r8_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r8_mrot_7 = (r8_rot_8 & 64);
    r8_mdest_7 = (r8 & -65);
    r8 = (r8_mdest_7 | r8_mrot_7);
    MemoryInline::FlatWrite32((r7 + 336), r8);
}

loc_80172278:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r2 + -26840));
    r3 = MemoryInline::FlatRead32((r7 + 336));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 1532));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r5 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFD gpr_write=0x00000FB9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8017214C func_8017214C preserves=true fpr_mask=0x00000000
