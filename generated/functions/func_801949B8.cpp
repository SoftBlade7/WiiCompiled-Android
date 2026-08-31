#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801949B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801949B8;

loc_801949B8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = -4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r29 & 31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801949E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80194AC4;
    }
}

loc_801949E8:
{
    r4 = 0x80340000u;
    r4 = (r4 + 22112);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 116u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r31 = 0;
}

loc_801949F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80194A70;
    }
}

loc_801949FC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
    r31 = 1;
}

loc_80194A08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80194A70;
    }
}

loc_80194A0C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
    r31 = 2;
}

loc_80194A18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80194A70;
    }
}

loc_80194A1C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r4 + 48));
    r31 = 3;
}

loc_80194A28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80194A70;
    }
}

loc_80194A2C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r4 + 64));
    r31 = 4;
}

loc_80194A38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80194A70;
    }
}

loc_80194A3C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 80u, (r4 + 80));
    r31 = 5;
}

loc_80194A48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80194A70;
    }
}

loc_80194A4C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r4 + 96));
    r31 = 6;
}

loc_80194A58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80194A70;
    }
}

loc_80194A5C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r4 + 112));
    r31 = 7;
}

loc_80194A68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80194A70;
    }
}

loc_80194A6C:
{
    r31 = 8;
}

loc_80194A70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(8));
}

loc_80194A74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80194A80;
    }
}

loc_80194A78:
{
    r31 = -5;
    goto loc_80194AC4;
}

loc_80194A80:
{
    r5 = 0x80340000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r5 = (r5 + 22112);
    r4 = -1161953280;
    r6 = (r5 + r0);
    r0 = 0;
    MemoryInline::FlatWrite32(r6, r29);
    r5 = (r30 + -16);
    MemoryInline::FlatWrite32((r6 + 8), r30);
    MemoryInline::FlatWrite32((r6 + 12), r29);
    MemoryInline::FlatWrite32(r29, r4);
    r4 = MemoryInline::FlatRead32((r6 + 12));
    MemoryInline::FlatWrite32((r4 + 4), r5);
    r4 = MemoryInline::FlatRead32((r6 + 12));
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r4 = MemoryInline::FlatRead32((r6 + 12));
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_80194AC4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000007B gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801949B8 func_801949B8 preserves=true fpr_mask=0x00000000
