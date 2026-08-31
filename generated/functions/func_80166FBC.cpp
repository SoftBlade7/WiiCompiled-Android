#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80166FBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80166FBC;

loc_80166FBC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(128));
}

loc_80166FC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80166FD4;
    }
}

loc_80166FC4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80166FD4:
{
}

loc_80166FD8:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(65377))) {
        goto loc_80166FFC;
    }
}

loc_80166FDC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(65439));
}

loc_80166FE0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80166FFC;
    }
}

loc_80166FE4:
{
    r4 = (r4 + -65536);
    r0 = 0;
    r4 = (r4 + 320);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80166FFC:
{
}

loc_80167000:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(55296))) {
        goto loc_8016700C;
    }
}

loc_80167004:
{
}

loc_80167008:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(63744))) {
        goto loc_80167010;
    }
}

loc_8016700C:
{
    goto loc_801670B4;
}

loc_80167010:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(57344));
}

loc_80167014:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8016706C;
    }
}

loc_80167018:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(59223));
}

loc_8016701C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8016706C;
    }
}

loc_80167020:
{
    r5 = (r4 + -65536);
    r4 = -1370750976;
    r4 = (r4 + 16733);
    r5 = (r5 + 8192);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r5)) >> 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_0 & 33554431);
    r0 = (r0 * 188);
    r6 = (r5 - r0);
    r0 = (r5 - r6);
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(63));
}

loc_8016704C:
{
    r0 = (r6 + 65);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(25));
    r4 = (r4_rot_0 & 33554431);
    r4 = (r4 + 240);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80167064;
    }
}

loc_80167060:
{
    r0 = (r6 + 64);
}

loc_80167064:
{
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8016706C:
{
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r4), static_cast<uint32_t>(63728));
}

loc_80167070:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801670A4;
    }
}

loc_80167074:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(63731));
}

loc_80167078:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801670A4;
    }
}

loc_8016707C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_8016708C;
    }
}

loc_80167080:
{
    r0 = 160;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_80167098;
}

loc_8016708C:
{
    r4 = (r4 + -65536);
    r0 = (r4 + 2060);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_80167098:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_801670A4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_801670B4:
{
    r7 = (r4 & 255);
}

loc_801670B8:
{
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r6 = (r6_rot_0 & 255);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801670D8;
    }
}

loc_801670C0:
{
    r0 = (r7 + -1);
    r4 = 0x80250000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4 = (r4 + 9504);
    r4_addr_0 = (r4 + r0);
    r8 = MemoryInline::FlatRead16(r4_addr_0);
    goto loc_801670DC;
}

loc_801670D8:
{
    r8 = 0;
}

loc_801670DC:
{
    r5 = 0x80250000u;
    r4 = 0x80250000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 510);
    r5 = (r5 + 9504);
    r4 = (r4 + -12760);
    r5_addr_0 = (r5 + r0);
    r5 = MemoryInline::FlatRead16(r5_addr_0);
    r7 = (r5 + -1);
    goto loc_80167154;
}

loc_801670FC:
{
    r5 = (r8 + r7);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
    r0 = (r0 + r5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r9 = (static_cast<int32_t>(r0) >> 1);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -4);
    r0 = (r0 - r9);
    r5 = (r4 + r0);
    r4_addr_4 = (r4 + r0);
    r10 = MemoryInline::FlatRead8(r4_addr_4);
    r4_addr_5 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_80167124:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016713C;
    }
}

loc_80167128:
{
    r4 = MemoryInline::FlatRead8((r5 + 1));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8016713C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r6));
}

loc_80167140:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8016714C;
    }
}

loc_80167144:
{
    r7 = r9;
    goto loc_80167154;
}

loc_8016714C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80167154;
    }
}

loc_80167150:
{
    r8 = r9;
}

loc_80167154:
{
    r0 = (r7 - r8);
}

loc_8016715C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(1))) {
        goto loc_801670FC;
    }
}

loc_80167160:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r4 = 0x80250000u;
    r0 = (r0 - r8);
    r4 = (r4 + -12760);
    r5 = (r4 + r0);
    r4_addr_6 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_8016717C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80167194;
    }
}

loc_80167180:
{
    r4 = MemoryInline::FlatRead8((r5 + 1));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80167194:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r0 = (r0 - r7);
    r5 = (r4 + r0);
    r4_addr_7 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_801671A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801671C0;
    }
}

loc_801671AC:
{
    r4 = MemoryInline::FlatRead8((r5 + 1));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_801671C0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80166FBC func_80166FBC preserves=true fpr_mask=0x00000000
