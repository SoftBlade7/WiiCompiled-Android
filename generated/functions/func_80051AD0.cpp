#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051AD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80051AD0;

loc_80051AD0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_80051ADC:
{
    r9 = 5;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r4 * 18);
    r10 = 5;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r11 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r8;
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r7;
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    r3 = MemoryInline::FlatRead32(r3);
    r31 = (r3 + r0);
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(20))) {
        goto loc_80051BEC;
    }
}

loc_80051B20:
{
    r3 = 0x80270000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 10256);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80051B38u:
        goto loc_80051B38;
        break;
    case 0x80051B44u:
        goto loc_80051B44;
        break;
    case 0x80051B50u:
        goto loc_80051B50;
        break;
    case 0x80051B5Cu:
        goto loc_80051B5C;
        break;
    case 0x80051B78u:
        goto loc_80051B78;
        break;
    case 0x80051B80u:
        goto loc_80051B80;
        break;
    case 0x80051B88u:
        goto loc_80051B88;
        break;
    case 0x80051B90u:
        goto loc_80051B90;
        break;
    case 0x80051B98u:
        goto loc_80051B98;
        break;
    case 0x80051BA0u:
        goto loc_80051BA0;
        break;
    case 0x80051BA8u:
        goto loc_80051BA8;
        break;
    case 0x80051BB0u:
        goto loc_80051BB0;
        break;
    case 0x80051BB8u:
        goto loc_80051BB8;
        break;
    case 0x80051BC0u:
        goto loc_80051BC0;
        break;
    case 0x80051BC8u:
        goto loc_80051BC8;
        break;
    case 0x80051BD0u:
        goto loc_80051BD0;
        break;
    case 0x80051BD8u:
        goto loc_80051BD8;
        break;
    case 0x80051BE0u:
        goto loc_80051BE0;
        break;
    case 0x80051BE8u:
        goto loc_80051BE8;
        break;
    case 0x80051B68u:
        goto loc_80051B68;
        break;
    case 0x80051B70u:
        goto loc_80051B70;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80051B38:
{
    r9 = 0;
    r7 = 1;
    goto loc_80051BEC;
}

loc_80051B44:
{
    r9 = 1;
    r7 = 1;
    goto loc_80051BEC;
}

loc_80051B50:
{
    r9 = 3;
    r7 = 1;
    goto loc_80051BEC;
}

loc_80051B5C:
{
    r9 = 4;
    r7 = 1;
    goto loc_80051BEC;
}

loc_80051B68:
{
    r9 = 2;
    goto loc_80051BEC;
}

loc_80051B70:
{
    r9 = 2;
    goto loc_80051BEC;
}

loc_80051B78:
{
    r9 = 5;
    goto loc_80051BEC;
}

loc_80051B80:
{
    r9 = 6;
    goto loc_80051BEC;
}

loc_80051B88:
{
    r9 = 7;
    goto loc_80051BEC;
}

loc_80051B90:
{
    r9 = 8;
    goto loc_80051BEC;
}

loc_80051B98:
{
    r9 = 9;
    goto loc_80051BEC;
}

loc_80051BA0:
{
    r9 = 10;
    goto loc_80051BEC;
}

loc_80051BA8:
{
    r9 = 11;
    goto loc_80051BEC;
}

loc_80051BB0:
{
    r9 = 12;
    goto loc_80051BEC;
}

loc_80051BB8:
{
    r10 = 0;
    goto loc_80051BEC;
}

loc_80051BC0:
{
    r10 = 1;
    goto loc_80051BEC;
}

loc_80051BC8:
{
    r10 = 2;
    goto loc_80051BEC;
}

loc_80051BD0:
{
    r10 = 3;
    goto loc_80051BEC;
}

loc_80051BD8:
{
    r10 = 4;
    goto loc_80051BEC;
}

loc_80051BE0:
{
    r10 = 5;
    goto loc_80051BEC;
}

loc_80051BE8:
{
    r10 = 6;
}

loc_80051BEC:
{
    r0 = (r5 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_80051BF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80051C28;
    }
}

loc_80051BF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_80051BFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80051C14;
    }
}

loc_80051C00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80051C04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80051C1C;
    }
}

loc_80051C08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(10));
}

loc_80051C0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80051C34;
    }
}

loc_80051C10:
{
    goto loc_80051CA8;
}

loc_80051C14:
{
    r0 = 0;
    goto loc_80051C50;
}

loc_80051C1C:
{
    r0 = 0;
    r8 = 1;
    goto loc_80051C50;
}

loc_80051C28:
{
    r11 = r0;
    r0 = 1;
    goto loc_80051C50;
}

loc_80051C34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(19));
}

loc_80051C38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80051C44;
    }
}

loc_80051C3C:
{
    r0 = 2;
    goto loc_80051C50;
}

loc_80051C44:
{
    r0 = 3;
}

loc_80051C50:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r5 = (r5_rot_1 & -16);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(7));
    r6 = (r6_rot_1 & -128);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r8 = (r4 + 4160);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(15));
    r7 = (r7_rot_1 & -32768);
    r0 = (r3 | r0);
    r5 = (r6 | r5);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(12));
    r4 = (r4_rot_1 & -4096);
    r3 = r31;
    r6 = (r7 | r4);
    r0 = (r5 | r0);
    r4 = (r8 & 65535);
    r5 = (r6 | r0);
    // inline leaf 0x8004BDF0 (16 guest instruction(s))
    r9 = 0;
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r8 = (r8_rot_1 & 255);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r7 = (r7_rot_2 & 255);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r6 = (r6_rot_2 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0 = (r0_rot_4 & 255);
    r10 = 16;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 6), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 8), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8004BDF0
    r4 = (r28 + 4176);
    r5 = (r30 + -64);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(8));
    r0 = (r0_rot_5 & 65280);
    r3 = (r31 + 9);
    r4 = (r4 & 65535);
    r5 = (r5 | r0);
    // inline leaf 0x8004BDF0 (16 guest instruction(s))
    r9 = 0;
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r8 = (r8_rot_2 & 255);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r7 = (r7_rot_3 & 255);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r6 = (r6_rot_3 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0 = (r0_rot_6 & 255);
    r10 = 16;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 8), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8004BDF0
}

loc_80051CA8:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0000FFB gpr_write=0xF0000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80051AD0 func_80051AD0 preserves=true fpr_mask=0x00000000
