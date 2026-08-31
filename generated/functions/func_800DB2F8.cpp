#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DB2F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800DB2F8;

loc_800DB2F8:
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
    r30 = 0x80270000u;
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = (r30 + 28752);
    r3 = 0;
    ctx->lr = 0x800DB32Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800DAE54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r31 = 0;
    r0 = 255;
    r3 = 50;
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r26));
    r4 = (r13 + -32160);
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite8((r5 + 23), static_cast<uint8_t>(r27));
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite32((r5 + 2160), r28);
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite32((r5 + 2164), r29);
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite8((r5 + 1785), static_cast<uint8_t>(r31));
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite8((r5 + 44), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite8((r5 + 45), static_cast<uint8_t>(r31));
    // inline leaf 0x801115D4 (10 guest instruction(s))
}

loc_inl1_0x801115D4:
{
}

loc_inl1_0x801115D8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(50))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x801115DC:
{
}

loc_inl1_0x801115E0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(254))) {
        goto loc_inl1_0x801115E8;
    }
}

loc_inl1_0x801115E4:
{
    goto loc_inl1_cont_801115D4;
}

loc_inl1_0x801115E8:
{
    r5 = 0x80280000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r5 + -11520);
    r5_addr_1 = (r5 + r0);
    MemoryInline::FlatWriteRam32(r5_addr_1, r4);
    goto loc_inl1_cont_801115D4;
}

loc_inl1_return:
{
}

loc_inl1_cont_801115D4:
{
    // end of inlined leaf 0x801115D4
    r4 = (r30 + 504);
    r3 = 51;
    // inline leaf 0x801115D4 (10 guest instruction(s))
}

loc_inl2_0x801115D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(50));
}

loc_inl2_0x801115D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x801115DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(254));
}

loc_inl2_0x801115E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl2_0x801115E8;
    }
}

loc_inl2_0x801115E4:
{
    goto loc_inl2_cont_801115D4;
}

loc_inl2_0x801115E8:
{
    r5 = 0x80280000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r5 = (r5 + -11520);
    r5_addr_3 = (r5 + r0);
    MemoryInline::FlatWriteRam32(r5_addr_3, r4);
    goto loc_inl2_cont_801115D4;
}

loc_inl2_return:
{
}

loc_inl2_cont_801115D4:
{
    // end of inlined leaf 0x801115D4
    r4 = (r30 + 492);
    r3 = 52;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801115D4u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4 = (r30 + 3116);
    r3 = 53;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801115D4u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4 = (r30 + 3128);
    r3 = 54;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801115D4u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = (r30 + 516);
    r3 = 55;
    MemoryInline::FlatWrite8((r5 + 22), static_cast<uint8_t>(r31));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801115D4u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 1;
    r4 = (r30 + 532);
    r3 = 56;
    MemoryInline::FlatWrite8((r5 + 2208), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite8((r5 + 23), static_cast<uint8_t>(r27));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801115D4u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r11 = (r1 + 32);
    MemoryInline::FlatWrite32((r3 + 28), r31);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite32((r3 + 40), r31);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite32((r3 + 36), r31);
    MemoryInline::FlatWrite32((r3 + 32), r31);
    MemoryInline::FlatWrite32((r3 + 2236), r31);
    MemoryInline::FlatWrite32((r3 + 2232), r31);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFF7FE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800DB2F8 func_800DB2F8 preserves=true fpr_mask=0x00000000
