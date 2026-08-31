#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8060BB58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8060BB58;

loc_8060BB58:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 25u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r4 + 18));
}

loc_8060BB60:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8060BB6C;
    }
}

loc_8060BB64:
{
    r0 = 0;
    goto loc_8060BBD4;
}

loc_8060BB6C:
{
    r0 = MemoryInline::FlatRead8((r3 + 18));
}

loc_8060BB74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8060BB80;
    }
}

loc_8060BB78:
{
    r0 = 1;
    goto loc_8060BBD4;
}

loc_8060BB80:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8060BB8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060BB98;
    }
}

loc_8060BB90:
{
    r0 = 1;
    goto loc_8060BBD4;
}

loc_8060BB98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060BBD0;
    }
}

loc_8060BB9C:
{
    r0 = MemoryInline::FlatRead8((r3 + 14));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r4 + 14));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8060BBA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060BBB4;
    }
}

loc_8060BBAC:
{
    r0 = 1;
    goto loc_8060BBD4;
}

loc_8060BBB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060BBD0;
    }
}

loc_8060BBB8:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r4 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 16));
}

loc_8060BBC4:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_8060BBD0;
    }
}

loc_8060BBC8:
{
    r0 = 1;
    goto loc_8060BBD4;
}

loc_8060BBD0:
{
    r0 = 0;
}

loc_8060BBD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8060BBD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060BBE4;
    }
}

loc_8060BBDC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8060BBE4:
{
    r0 = MemoryInline::FlatRead8((r3 + 18));
}

loc_8060BBEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8060BBF8;
    }
}

loc_8060BBF0:
{
    r0 = 0;
    goto loc_8060BC5C;
}

loc_8060BBF8:
{
}

loc_8060BBFC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8060BC08;
    }
}

loc_8060BC00:
{
    r0 = 1;
    goto loc_8060BC5C;
}

loc_8060BC08:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 12));
    r5 = MemoryInline::FlatRead16((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8060BC14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060BC20;
    }
}

loc_8060BC18:
{
    r0 = 1;
    goto loc_8060BC5C;
}

loc_8060BC20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060BC58;
    }
}

loc_8060BC24:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r4 + 14));
    r5 = MemoryInline::FlatRead8((r3 + 14));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8060BC30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060BC3C;
    }
}

loc_8060BC34:
{
    r0 = 1;
    goto loc_8060BC5C;
}

loc_8060BC3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060BC58;
    }
}

loc_8060BC40:
{
    r5 = MemoryInline::FlatRead16((r3 + 16));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r4 + 16));
}

loc_8060BC4C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_8060BC58;
    }
}

loc_8060BC50:
{
    r0 = 1;
    goto loc_8060BC5C;
}

loc_8060BC58:
{
    r0 = 0;
}

loc_8060BC5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8060BC60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060BC6C;
    }
}

loc_8060BC64:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8060BC6C:
{
    r5 = MemoryInline::FlatRead8((r3 + 24));
}

loc_8060BC74:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_8060BC8C;
    }
}

loc_8060BC78:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r4 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8060BC80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060BC8C;
    }
}

loc_8060BC84:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8060BC8C:
{
}

loc_8060BC90:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8060BCA8;
    }
}

loc_8060BC94:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r4 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8060BC9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060BCA8;
    }
}

loc_8060BCA0:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8060BCA8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r5 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_8060BCB4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8060BCC0;
    }
}

loc_8060BCB8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8060BCC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060BCCC;
    }
}

loc_8060BCC4:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8060BCCC:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r0 - r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8060BB58 func_8060BB58 preserves=true fpr_mask=0x00000000
