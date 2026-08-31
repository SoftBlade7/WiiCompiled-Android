#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E99E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E99E0;

loc_801E99E0:
{
    r5 = MemoryInline::FlatRead32((r13 + -24384));
}

loc_801E99E8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801E99F4;
    }
}

loc_801E99EC:
{
    r0 = (r5 + 13824);
    goto loc_801E99F8;
}

loc_801E99F4:
{
    r0 = 0;
}

loc_801E99F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E99FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E9A08;
    }
}

loc_801E9A00:
{
    r3 = -9;
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

loc_801E9A08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E9A0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E9A18;
    }
}

loc_801E9A10:
{
    r3 = -3;
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

loc_801E9A18:
{
}

loc_801E9A1C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801E9A2C;
    }
}

loc_801E9A20:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    goto loc_801E9A38;
}

loc_801E9A2C:
{
    r4 = MemoryInline::FlatRead16(r3);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
}

loc_801E9A38:
{
    r7 = MemoryInline::FlatRead32((r13 + -24384));
}

loc_801E9A40:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801E9A4C;
    }
}

loc_801E9A44:
{
    r4 = (r7 + 13824);
    goto loc_801E9A50;
}

loc_801E9A4C:
{
    r4 = 0;
}

loc_801E9A50:
{
    r8 = MemoryInline::FlatRead16(r3);
    r0 = MemoryInline::FlatRead16((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_801E9A5C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E9A68;
    }
}

loc_801E9A60:
{
    r3 = -15;
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

loc_801E9A68:
{
    r6 = (r7 + 13824);
    goto loc_801E9AF0;
}

loc_801E9A70:
{
}

loc_801E9A74:
{
    r5 = (r8 & 65535);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801E9A84;
    }
}

loc_801E9A7C:
{
    r4 = r6;
    goto loc_801E9A88;
}

loc_801E9A84:
{
    r4 = 0;
}

loc_801E9A88:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_801E9A90:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_801E9AA0;
    }
}

loc_801E9A94:
{
    r0 = (r8 & 65535);
}

loc_801E9A9C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801E9AA8;
    }
}

loc_801E9AA0:
{
    r5 = -3;
    goto loc_801E9AD8;
}

loc_801E9AA8:
{
}

loc_801E9AAC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801E9AB8;
    }
}

loc_801E9AB0:
{
    r4 = r6;
    goto loc_801E9ABC;
}

loc_801E9AB8:
{
    r4 = 0;
}

loc_801E9ABC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 1048560);
    r5 = 0;
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 128));
}

loc_801E9AD0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E9AD8;
    }
}

loc_801E9AD4:
{
    r5 = -13;
}

loc_801E9AD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801E9ADC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E9AEC;
    }
}

loc_801E9AE0:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r8));
    r3 = 0;
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

loc_801E9AEC:
{
    r8 = (r8 + 1);
}

loc_801E9AF0:
{
}

loc_801E9AF4:
{
    r5 = (r8 & 65535);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801E9B04;
    }
}

loc_801E9AFC:
{
    r4 = r6;
    goto loc_801E9B08;
}

loc_801E9B04:
{
    r4 = 0;
}

loc_801E9B08:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_801E9B10:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E9A70;
    }
}

loc_801E9B14:
{
    r3 = -15;
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

// RECOMP_GUEST_ABI gpr_read=0x000021F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E99E0 func_801E99E0 preserves=true fpr_mask=0x00000000
