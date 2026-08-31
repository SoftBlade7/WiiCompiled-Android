#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B0A20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801B0A20;

loc_801B0A20:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 32;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = r31;
    ctx->lr = 0x801B0A4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8(r30);
    r0 = (r30 + 1);
    MemoryInline::FlatWrite32((r31 + 20), r0);
    r3 = (r4 & 31);
    r6 = (r4 & 224);
    r0 = (r3 + 1);
    r3 = (r30 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(128));
}

loc_801B0A6C:
{
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 12), r0);
    MemoryInline::FlatWrite32((r31 + 24), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0AD4;
    }
}

loc_801B0A7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B0AA4;
    }
}

loc_801B0A80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(64));
}

loc_801B0A84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0AF8;
    }
}

loc_801B0A88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B0A98;
    }
}

loc_801B0A8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(32));
}

loc_801B0A90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0B1C;
    }
}

loc_801B0A94:
{
    goto loc_801B0B90;
}

loc_801B0A98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(96));
}

loc_801B0A9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0AC8;
    }
}

loc_801B0AA0:
{
    goto loc_801B0B90;
}

loc_801B0AA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(192));
}

loc_801B0AA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0AEC;
    }
}

loc_801B0AAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B0ABC;
    }
}

loc_801B0AB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(160));
}

loc_801B0AB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0AE0;
    }
}

loc_801B0AB8:
{
    goto loc_801B0B90;
}

loc_801B0ABC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(224));
}

loc_801B0AC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0AC8;
    }
}

loc_801B0AC4:
{
    goto loc_801B0B90;
}

loc_801B0AC8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    goto loc_801B0B44;
}

loc_801B0AD4:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    goto loc_801B0B44;
}

loc_801B0AE0:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    goto loc_801B0B44;
}

loc_801B0AEC:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    goto loc_801B0B44;
}

loc_801B0AF8:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0 = (r3 + 1);
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 24), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 16), r4);
    MemoryInline::FlatWrite32((r31 + 28), r0);
    goto loc_801B0B44;
}

loc_801B0B1C:
{
    r5 = MemoryInline::FlatRead8(r3);
    r0 = (r3 + 2);
    r4 = MemoryInline::FlatRead8((r3 + 1));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r4_mrot_1 = (r4_rot_1 & 65280);
    r4_mdest_1 = (r4 & -65281);
    r4 = (r4_mdest_1 | r4_mrot_1);
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 24), r0);
    r0 = (r3 + 2);
    MemoryInline::FlatWrite32((r31 + 16), r4);
    MemoryInline::FlatWrite32((r31 + 28), r0);
}

loc_801B0B44:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(64));
}

loc_801B0B48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B0B54;
    }
}

loc_801B0B4C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(32));
}

loc_801B0B50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B0B60;
    }
}

loc_801B0B54:
{
    r0 = 64;
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r0));
    goto loc_801B0B74;
}

loc_801B0B60:
{
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r6));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r31 + 24));
    r5 = MemoryInline::FlatRead32((r31 + 16));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801B0B74:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r4 = MemoryInline::FlatRead32((r31 + 28));
    r0 = (r3 + r0);
    r3 = (r0 + r4);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 28), r0);
}

loc_801B0B90:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (0 - r3);
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801B0A20 func_801B0A20 preserves=true fpr_mask=0x00000000
