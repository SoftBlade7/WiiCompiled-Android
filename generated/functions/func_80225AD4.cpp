#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80225AD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80225AD4;

loc_80225AD4:
{
    r4 = (r4 + -32);
    r5 = MemoryInline::FlatRead32(r4);
}

loc_80225ADC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80225AEC;
    }
}

loc_80225AE0:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r5 + 4), r0);
    goto loc_80225AF4;
}

loc_80225AEC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 60), r0);
}

loc_80225AF4:
{
    r5 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80225AFC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80225B08;
    }
}

loc_80225B00:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_80225B08:
{
    r6 = MemoryInline::FlatRead32((r4 + 8));
    r5 = 0;
}

loc_80225B14:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80225B28;
    }
}

loc_80225B18:
{
    r0 = MemoryInline::FlatRead8((r6 + 20));
}

loc_80225B20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80225B28;
    }
}

loc_80225B24:
{
    r5 = r6;
}

loc_80225B28:
{
    r7 = MemoryInline::FlatRead32((r4 + 12));
    r6 = 0;
}

loc_80225B34:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80225B48;
    }
}

loc_80225B38:
{
    r0 = MemoryInline::FlatRead8((r7 + 20));
}

loc_80225B40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80225B48;
    }
}

loc_80225B44:
{
    r6 = r7;
}

loc_80225B48:
{
}

loc_80225B4C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80225BF4;
    }
}

loc_80225B50:
{
}

loc_80225B54:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80225BC4;
    }
}

loc_80225B58:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 20u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, r6);
}

loc_80225B60:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80225B70;
    }
}

loc_80225B64:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r6 + 4));
    MemoryInline::FlatWrite32((r7 + 4), r0);
    goto loc_80225B78;
}

loc_80225B70:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r6 + 4));
    MemoryInline::FlatWrite32((r3 + 64), r0);
}

loc_80225B78:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r6 + 4));
}

loc_80225B80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80225B8C;
    }
}

loc_80225B84:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r6);
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80225B8C:
{
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r6 + 16));
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r3 + r0);
    r3 = (r0 + r4);
    r0 = (r3 + 64);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r6 + 12));
    MemoryInline::FlatWrite32((r5 + 12), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r6 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80225BB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80225BBC:
{
    MemoryInline::FlatWrite32((r3 + 8), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80225BC4:
{
    r3 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r3 = (r0 + r3);
    r0 = (r3 + 32);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r5 + 12), r0);
    r3 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80225BE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80225BEC:
{
    MemoryInline::FlatWrite32((r3 + 8), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80225BF4:
{
}

loc_80225BF8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80225C6C;
    }
}

loc_80225BFC:
{
    r7 = MemoryInline::FlatRead32(r6);
}

loc_80225C04:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80225C10;
    }
}

loc_80225C08:
{
    MemoryInline::FlatWrite32((r7 + 4), r4);
    goto loc_80225C14;
}

loc_80225C10:
{
    MemoryInline::FlatWrite32((r3 + 64), r4);
}

loc_80225C14:
{
    r3 = MemoryInline::FlatRead32((r6 + 4));
}

loc_80225C1C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80225C24;
    }
}

loc_80225C20:
{
    MemoryInline::FlatWrite32(r3, r4);
}

loc_80225C24:
{
    r3 = MemoryInline::FlatRead32(r6);
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r3);
    r7 = MemoryInline::FlatRead32((r4 + 16));
    r3 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r3 = (r3 + r7);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    r0 = (r3 + 32);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    r0 = MemoryInline::FlatRead32((r6 + 12));
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r3 = MemoryInline::FlatRead32((r6 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80225C60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80225C64:
{
    MemoryInline::FlatWrite32((r3 + 8), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80225C6C:
{
    r5 = MemoryInline::FlatRead32((r3 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80225C74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80225C7C;
    }
}

loc_80225C78:
{
    MemoryInline::FlatWrite32(r5, r4);
}

loc_80225C7C:
{
    r5 = MemoryInline::FlatRead32((r3 + 64));
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 4), r5);
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 64), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80225AD4 func_80225AD4 preserves=true fpr_mask=0x00000000
