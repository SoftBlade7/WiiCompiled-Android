#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80200C78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
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

    goto loc_80200C78;

loc_80200C78:
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
    r0 = 0;
    r26 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    r29 = r5;
    r30 = r6;
    r31 = r7;
    MemoryInline::FlatWrite32(r8, r0);
    r27 = r8;
    r3 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r3 & 8);
}

loc_80200CB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80200CD0;
    }
}

loc_80200CB8:
{
    r0 = (r3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80200CBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80200CC8;
    }
}

loc_80200CC0:
{
    r0 = (r3 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80200CC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200CD0;
    }
}

loc_80200CC8:
{
    r3 = 10;
    goto loc_80200E00;
}

loc_80200CD0:
{
    r4 = MemoryInline::FlatRead32((r7 + 8));
    r0 = MemoryInline::FlatRead16((r4 + 632));
    r0 = (r0 & 3);
}

loc_80200CDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80200CF4;
    }
}

loc_80200CE0:
{
    r0 = MemoryInline::FlatRead16((r7 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80200CE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80200CF4;
    }
}

loc_80200CEC:
{
    r3 = 25;
    goto loc_80200E00;
}

loc_80200CF4:
{
    r3 = MemoryInline::FlatRead32((r7 + 32));
    r0 = MemoryInline::FlatRead32((r4 + 608));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80200D00:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80200D0C;
    }
}

loc_80200D04:
{
    r3 = 28;
    goto loc_80200E00;
}

loc_80200D0C:
{
    r3 = (r4 + 4);
    r4 = (r7 + 12);
    // inline leaf 0x801FD640 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 44), r4);
    // end of inlined leaf 0x801FD640
    r5 = (r29 * r30);
    r28 = MemoryInline::FlatRead32((r31 + 32));
    r3 = r31;
    r4 = r26;
    r6 = (r1 + 8);
    ctx->lr = 0x80200D30u;
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
    InvokeDirectCpu<0x801FF67Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
}

loc_80200D3C:
{
    MemoryInline::FlatWrite32(r27, r0);
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r30))) {
        goto loc_80200DF0;
    }
}

loc_80200D44:
{
    r0 = (r0 * r29);
}

loc_80200D4C:
{
    r9 = (r28 + r0);
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80200D5C;
    }
}

loc_80200D54:
{
    r5 = 0;
    goto loc_80200D64;
}

loc_80200D5C:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r5 = MemoryInline::FlatRead32((r4 + 612));
}

loc_80200D64:
{
    r4 = MemoryInline::FlatRead16(r5);
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r4 = (r4 + -1);
    r5 = MemoryInline::FlatRead8((r5 + 32));
    r8 = (r0 & r4);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r4 = (r9 & r4);
    r7 = (0 - r8);
    r5 = PPC_Srw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r5));
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r7 = (r7 | r8);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r4 = (r6 + r4);
    r0 = (r5 + r0);
}

loc_80200DA8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_80200DB4;
    }
}

loc_80200DAC:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 36), r0);
}

loc_80200DB4:
{
}

loc_80200DB8:
{
    MemoryInline::FlatWrite32((r31 + 32), r9);
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80200DC8;
    }
}

loc_80200DC0:
{
    r4 = 0;
    goto loc_80200DD0;
}

loc_80200DC8:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 612));
}

loc_80200DD0:
{
    r5 = MemoryInline::FlatRead32((r31 + 32));
    r0 = MemoryInline::FlatRead8((r4 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r31 + 40), r0);
    r4 = MemoryInline::FlatRead16(r4);
    r0 = (r4 + -1);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
}

loc_80200DF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80200DF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200DFC;
    }
}

loc_80200DF8:
{
    goto loc_80200E00;
}

loc_80200DFC:
{
    r3 = 0;
}

loc_80200E00:
{
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80200C78 func_80200C78 preserves=true fpr_mask=0x00000000
