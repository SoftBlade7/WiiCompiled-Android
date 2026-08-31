#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012F9B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8012F9B8;

loc_8012F9B8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r27 = 0x80310000u;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
}

loc_8012F9D4:
{
    r27 = (r27 + -26176);
    r30 = r3;
    r31 = (r27 + 84);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012FB00;
    }
}

loc_8012F9E4:
{
    r26_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r26 = (r26_rot_1 & 1020);
    r0 = (r31 + 196608);
    r3 = (r0 + r26);
    r0 = MemoryInline::FlatRead32((r3 + -30180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012F9F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012FA00;
    }
}

loc_8012F9FC:
{
    goto loc_8012FB00;
}

loc_8012FA00:
{
    ctx->lr = 0x8012FA04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80130288u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r4 = (r31 + 196608);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 4080);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r3 + -30312));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012FA18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012FAE4;
    }
}

loc_8012FA1C:
{
    r28 = 0;
    r29 = (r4 + r26);
    MemoryInline::FlatWrite16((r3 + -30316), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite16((r3 + -30314), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite16((r3 + -30312), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite16((r3 + -30310), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite32((r3 + -30324), r28);
    MemoryInline::FlatWrite32((r3 + -30320), r28);
    r3 = MemoryInline::FlatRead32((r29 + -30180));
    ctx->lr = 0x8012FA44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801302FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r31 + 196608);
    MemoryInline::FlatWrite32((r29 + -30180), r28);
    r3 = (r4 + r26);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 510);
    MemoryInline::FlatWrite32((r3 + -30144), r28);
    r3 = (r4 + r0);
    r7 = r31;
    r6 = 0;
    MemoryInline::FlatWrite16((r3 + -30108), static_cast<uint16_t>(r28));
    r4 = MemoryInline::FlatRead8((r4 + -30073));
    goto loc_8012FA8C;
}

loc_8012FA70:
{
    r3 = (r6 & 255);
    r3 = (r3 + 196608);
    r0 = (r3 + -30082);
    r7_addr_2 = (r7 + r0);
    r0 = MemoryInline::FlatRead8(r7_addr_2);
}

loc_8012FA84:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(r0))) {
        goto loc_8012FA98;
    }
}

loc_8012FA88:
{
    r6 = (r6 + 1);
}

loc_8012FA8C:
{
    r0 = (r6 & 255);
}

loc_8012FA94:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8012FA70;
    }
}

loc_8012FA98:
{
    r4 = (r7 + 196608);
    goto loc_8012FABC;
}

loc_8012FAA0:
{
    r3 = (r6 & 255);
    r6 = (r6 + 1);
    r3 = (r3 + 196608);
    r3 = (r3 + -30082);
    r3 = (r7 + r3);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_8012FABC:
{
    r3 = MemoryInline::FlatRead8((r4 + -30073));
    r5 = (r6 & 255);
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_8012FACC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012FAA0;
    }
}

loc_8012FAD0:
{
    r4 = (r31 + 196608);
    r3 = MemoryInline::FlatRead8((r4 + -30073));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam8((r4 + -30073), static_cast<uint8_t>(r0));
    goto loc_8012FAFC;
}

loc_8012FAE4:
{
    r3 = 65536;
    r4 = 0x80280000u;
    r0 = (r3 + -8);
    r3 = (r0 & 65535);
    r4 = (r4 + 10248);
    // inline leaf 0x801302CC (1 guest instruction(s))
    // end of inlined leaf 0x801302CC
}

loc_8012FAFC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80130264u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8012FB00:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8012F9B8 func_8012F9B8 preserves=true fpr_mask=0x00000000
