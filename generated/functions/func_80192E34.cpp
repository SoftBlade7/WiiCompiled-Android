#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80192E34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80192E34;

loc_80192E34:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_80192E4C:
{
    r30 = r3;
    r31 = r4;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80192F0C;
    }
}

loc_80192E58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80192F50;
    }
}

loc_80192E5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80192E60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80192F0C;
    }
}

loc_80192E64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80192E6C;
    }
}

loc_80192E68:
{
    goto loc_80192F50;
}

loc_80192E6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80192E74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80192F00;
    }
}

loc_80192E78:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r7 = (r30 + 9244);
    r9 = 0;
    r0 = 1;
    goto loc_80192EEC;
}

loc_80192E8C:
{
    r5 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::FlatWrite32((r7 + 12), r5);
    r4 = MemoryInline::FlatRead32((r7 + 24));
    MemoryInline::FlatWrite32((r7 + 28), r4);
    r8 = MemoryInline::FlatRead8(r5);
    r6 = (r8 & 127);
    goto loc_80192EC4;
}

loc_80192EA8:
{
    r4 = MemoryInline::FlatRead32((r7 + 12));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(7));
    r5 = (r5_rot_3 & -128);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r7 + 12), r4);
    r8 = MemoryInline::FlatRead8(r4);
    r4 = (r8 & 127);
    r6 = (r5 + r4);
}

loc_80192EC4:
{
    r4 = (r8 & 128);
}

loc_80192EC8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80192EA8;
    }
}

loc_80192ECC:
{
    r5 = MemoryInline::FlatRead32((r7 + 12));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r4 = (r4_rot_2 & -65536);
    r9 = (r9 + 1);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r7 + 12), r5);
    MemoryInline::FlatWrite32((r7 + 32), r4);
    MemoryInline::FlatWrite32((r7 + 36), r0);
    r7 = (r7 + 40);
}

loc_80192EEC:
{
    r4 = MemoryInline::FlatRead16((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(r4));
}

loc_80192EF4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80192E8C;
    }
}

loc_80192EF8:
{
    MemoryInline::FlatWrite32((r30 + 12), r4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80192F00:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 16), r0);
    goto loc_80192F50;
}

loc_80192F0C:
{
    r27 = 0;
    r28 = 123;
    r29 = 0;
}

loc_80192F18:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r27 | 176);
    r26 = r3;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r3 = (r30 + 20);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r29));
    // inline leaf 0x80191464 (20 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 1020), r5);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 1020), r5);
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r4 = MemoryInline::FlatRead32((r3 + 1024));
    r5 = (r5 + 1);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 1020), r5);
    MemoryInline::FlatWrite32((r3 + 1024), r0);
    // end of inlined leaf 0x80191464
    r3 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(16));
}

loc_80192F4C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80192F18;
    }
}

loc_80192F50:
{
    MemoryInline::FlatWrite32((r30 + 4), r31);
    r11 = (r1 + 48);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0003FB gpr_write=0xFC000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80192E34 func_80192E34 preserves=true fpr_mask=0x00000000
