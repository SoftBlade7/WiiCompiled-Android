#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017039C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mdest_3 = 0;
    uint32_t r7_mdest_4 = 0;
    uint32_t r7_mdest_5 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_mrot_3 = 0;
    uint32_t r7_mrot_4 = 0;
    uint32_t r7_mrot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8017039C;

loc_8017039C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_801703A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80170418;
    }
}

loc_801703A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801703C0;
    }
}

loc_801703A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_801703AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801703E8;
    }
}

loc_801703B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80170400;
    }
}

loc_801703B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801703B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801703D0;
    }
}

loc_801703BC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_801703C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801703C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017043C;
    }
}

loc_801703C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_801703CC:
{
    goto loc_80170430;
}

loc_801703D0:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r8 = 0;
    r0 = MemoryInline::FlatRead32(r4);
    r7 = MemoryInline::FlatRead32((r3 + 168));
    r7_mrot_0 = (r0 & -256);
    r7_mdest_0 = (r7 & 255);
    r7 = (r7_mdest_0 | r7_mrot_0);
    goto loc_8017044C;
}

loc_801703E8:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r8 = 1;
    r0 = MemoryInline::FlatRead32(r4);
    r7 = MemoryInline::FlatRead32((r3 + 172));
    r7_mrot_2 = (r0 & -256);
    r7_mdest_2 = (r7 & 255);
    r7 = (r7_mdest_2 | r7_mrot_2);
    goto loc_8017044C;
}

loc_80170400:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r8 = 0;
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r7 = MemoryInline::FlatRead32((r3 + 168));
    r7_mrot_1 = (r0 & 255);
    r7_mdest_1 = (r7 & -256);
    r7 = (r7_mdest_1 | r7_mrot_1);
    goto loc_8017044C;
}

loc_80170418:
{
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r8 = 1;
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r7 = MemoryInline::FlatRead32((r3 + 172));
    r7_mrot_4 = (r0 & 255);
    r7_mdest_4 = (r7 & -256);
    r7 = (r7_mdest_4 | r7_mrot_4);
    goto loc_8017044C;
}

loc_80170430:
{
    r7 = MemoryInline::FlatRead32(r4);
    r8 = 0;
    goto loc_8017044C;
}

loc_8017043C:
{
    r7 = MemoryInline::FlatRead32(r4);
    r8 = 1;
}

loc_8017044C:
{
    r6 = MemoryInline::FlatRead32((r2 + -26840));
    r3 = 256;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = MemoryInline::FlatRead32((r6 + 1532));
    r4 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r8));
    r3 = (r6 + r0);
    r0 = (r5 | r4);
    MemoryInline::FlatWrite32((r6 + 1532), r0);
    MemoryInline::FlatWrite32((r3 + 168), r7);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001D gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8017039C func_8017039C preserves=true fpr_mask=0x00000000
