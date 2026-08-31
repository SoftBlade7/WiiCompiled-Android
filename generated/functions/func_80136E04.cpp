#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80136E04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80136E04;

loc_80136E04:
{
    r4 = 0x80330000u;
    r0 = 2;
    r4 = (r4 + 24648);
    r5 = 0;
    ctr = r0;
}

loc_80136E18:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & 8160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_80136E28:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_80136E38;
    }
}

loc_80136E2C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    goto loc_80136F3C;
}

loc_80136E38:
{
    r5 = (r5 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_3 & 8160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_80136E4C:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_80136E5C;
    }
}

loc_80136E50:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    goto loc_80136F3C;
}

loc_80136E5C:
{
    r5 = (r5 + 1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_4 & 8160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_80136E70:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_80136E80;
    }
}

loc_80136E74:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    goto loc_80136F3C;
}

loc_80136E80:
{
    r5 = (r5 + 1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_5 & 8160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_80136E94:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_80136EA4;
    }
}

loc_80136E98:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    goto loc_80136F3C;
}

loc_80136EA4:
{
    r5 = (r5 + 1);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_6 & 8160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_80136EB8:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_80136EC8;
    }
}

loc_80136EBC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    goto loc_80136F3C;
}

loc_80136EC8:
{
    r5 = (r5 + 1);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_7 & 8160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_80136EDC:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_80136EEC;
    }
}

loc_80136EE0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    goto loc_80136F3C;
}

loc_80136EEC:
{
    r5 = (r5 + 1);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_8 & 8160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_80136F00:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_80136F10;
    }
}

loc_80136F04:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    goto loc_80136F3C;
}

loc_80136F10:
{
    r5 = (r5 + 1);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_9 & 8160);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_80136F24:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_80136F34;
    }
}

loc_80136F28:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r0));
    goto loc_80136F3C;
}

loc_80136F34:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80136E18;
    }
}

loc_80136F3C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(5904));
}

loc_80136F40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80136F6C;
    }
}

loc_80136F44:
{
    r3 = 24;
    ctx->lr = 0x80136F4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EBB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80136F50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80136F6C;
    }
}

loc_80136F54:
{
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r31));
    MemoryInline::FlatWriteRam16((r3 + 6), static_cast<uint16_t>(r28));
    MemoryInline::FlatWriteRam32((r3 + 8), r30);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    ctx->lr = 0x80136F6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013223Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80136F6C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00020FB gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80136E04 func_80136E04 preserves=true fpr_mask=0x00000000
