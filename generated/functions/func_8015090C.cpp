#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015090C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015090C;

loc_8015090C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r27 = r4;
    r30 = r3;
    r31 = r5;
    r28 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015182Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r4 = 0x80340000u;
    r29 = r3;
    r4 = (r4 + -25816);
    r0 = MemoryInline::FlatRead8((r4 + 1044));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80150948:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80150960;
    }
}

loc_8015094C:
{
    r3 = 589824;
    r4 = 0x80280000u;
    r3 = (r3 + 3);
    r4 = (r4 + 27648);
    ctx->lr = 0x80150960u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80150960:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80150964:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801509E8;
    }
}

loc_80150968:
{
    r3 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80151880u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80150974:
{
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801509DC;
    }
}

loc_8015097C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 9u, true, false);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 0u, r31);
    r4 = r27;
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r31 + 1));
    r5 = r31;
    r6 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 81), 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r3 + 81), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r3 + 82), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r31 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r31 + 3));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r3 + 83), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r3 + 84), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r31 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r31 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r3 + 85), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r3 + 86), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r31 + 6));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r31 + 7));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r3 + 87), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r3 + 88), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r31 + 8));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r3 + 89), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->lr = 0x801509D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015458Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80150A44;
}

loc_801509DC:
{
    r0 = MemoryInline::FlatRead8(r3);
    r3 = (r30 + r27);
    MemoryInline::FlatWrite8((r3 + 36), static_cast<uint8_t>(r0));
}

loc_801509E8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 9u, true, false);
    r7 = MemoryInline::ReadResolved8(guest_range_1, 0u, r31);
    r3 = r30;
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r31 + 1));
    r4 = r27;
    r5 = r31;
    r6 = r28;
    guest_range_3 = MemoryInline::ResolveRangeHost((r29 + 81), 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r29 + 81), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r29 + 82), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r31 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r31 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r29 + 83), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r29 + 84), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r31 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r31 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r29 + 85), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r29 + 86), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r31 + 6));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r31 + 7));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r29 + 87), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r29 + 88), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r31 + 8));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r29 + 89), static_cast<uint8_t>(r0));
    ctx->lr = 0x80150A44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015458Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80150A44:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
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
// RECOMP_REGISTRATION base 0x8015090C func_8015090C preserves=true fpr_mask=0x00000000
