#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057EE50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8057EE50;

loc_8057EE50:
{
    r5 = MemoryInline::FlatRead16((r3 + 252));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = 0x808B0000u;
    r6 = (r6 + 22768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3));
}

loc_8057EE60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8057EE64:
{
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057EE74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8057EE78:
{
}

loc_8057EE7C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 976), 0, 16u, true, false);
    r8 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r6 + 978));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r6 + 976));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_8057EF28;
    }
}

loc_8057EE88:
{
    r5 = MemoryInline::FlatRead16((r3 + 254));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r5 = (r5 + r7);
    MemoryInline::FlatWrite16((r3 + 254), static_cast<uint16_t>(r5));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8057EEA0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r6 + 984));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = MemoryInline::FlatRead16((r4 + 6368));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r6 + 988));
    r5 = r0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057EEBC;
    }
}

loc_8057EEB4:
{
    r5 = r7;
    r7 = r0;
}

loc_8057EEBC:
{
    r4 = MemoryInline::FlatRead32(r3);
    f0.d = (-(f1.d));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 136));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8057EED0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057EEE4;
    }
}

loc_8057EED4:
{
    r0 = MemoryInline::FlatRead16((r3 + 254));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 254), static_cast<uint16_t>(r0));
    goto loc_8057EEF8;
}

loc_8057EEE4:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8057EEE8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057EEF8;
    }
}

loc_8057EEEC:
{
    r0 = MemoryInline::FlatRead16((r3 + 254));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16((r3 + 254), static_cast<uint16_t>(r0));
}

loc_8057EEF8:
{
    r0 = MemoryInline::FlatRead16((r3 + 254));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8057EF00:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r0))) {
        goto loc_8057EF10;
    }
}

loc_8057EF04:
{
    MemoryInline::FlatWrite16((r3 + 254), static_cast<uint16_t>(r8));
    r0 = 1;
    goto loc_8057EF14;
}

loc_8057EF10:
{
    r0 = 0;
}

loc_8057EF14:
{
}

loc_8057EF18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057EF28;
    }
}

loc_8057EF1C:
{
    r4 = MemoryInline::FlatRead16((r3 + 252));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 252), static_cast<uint16_t>(r0));
}

loc_8057EF28:
{
    r0 = MemoryInline::FlatRead16((r3 + 252));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r8 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r6 + 982));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8057EF34:
{
    r7 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r6 + 980));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8057EF3C:
{
    r5 = MemoryInline::FlatRead16((r3 + 256));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r5 = (r5 + r7);
    MemoryInline::FlatWrite16((r3 + 256), static_cast<uint16_t>(r5));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8057EF54:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r6 + 984));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = MemoryInline::FlatRead16((r4 + 6368));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r6 + 988));
    r5 = r0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057EF70;
    }
}

loc_8057EF68:
{
    r5 = r7;
    r7 = r0;
}

loc_8057EF70:
{
    r4 = MemoryInline::FlatRead32(r3);
    f0.d = (-(f1.d));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 136));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8057EF84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057EF98;
    }
}

loc_8057EF88:
{
    r0 = MemoryInline::FlatRead16((r3 + 256));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 256), static_cast<uint16_t>(r0));
    goto loc_8057EFAC;
}

loc_8057EF98:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8057EF9C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057EFAC;
    }
}

loc_8057EFA0:
{
    r0 = MemoryInline::FlatRead16((r3 + 256));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r7);
    MemoryInline::FlatWrite16((r3 + 256), static_cast<uint16_t>(r0));
}

loc_8057EFAC:
{
    r0 = MemoryInline::FlatRead16((r3 + 256));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8057EFB4:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r0))) {
        goto loc_8057EFC4;
    }
}

loc_8057EFB8:
{
    MemoryInline::FlatWrite16((r3 + 256), static_cast<uint16_t>(r8));
    r0 = 1;
    goto loc_8057EFC8;
}

loc_8057EFC4:
{
    r0 = 0;
}

loc_8057EFC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057EFCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8057EFD0:
{
    r4 = MemoryInline::FlatRead16((r3 + 252));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 252), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8057EE50 func_8057EE50 preserves=true fpr_mask=0x00000000
