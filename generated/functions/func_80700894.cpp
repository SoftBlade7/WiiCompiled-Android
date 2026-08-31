#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80700894(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80700894;

loc_80700894:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r5 = MemoryInline::FlatRead32((r30 + 10392));
    r4 = MemoryInline::FlatRead32((r5 + 1468));
    r5 = (r5 + 1724);
    ctx->lr = 0x807008C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802104ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808C0000u;
    r4 = 0x80700000u;
    r3 = (r3 + 32672);
    r5 = 0x806F0000u;
    r0 = (r3 + 28);
    MemoryInline::FlatWrite32(r31, r3);
    r3 = (r31 + 128);
    r4 = (r4 + -30488);
    MemoryInline::FlatWrite32((r31 + 84), r0);
    r5 = (r5 + 30592);
    r6 = 4;
    r7 = 4;
    ctx->lr = 0x807008F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 144), r0);
    r3 = (r31 + 148);
    // inline leaf 0x80702678 (21 guest instruction(s))
    r5 = 0x808D0000u;
    r4 = 65536;
    r6 = 0;
    r0 = 8;
    r5 = (r5 + -32736);
    r4 = (r4 + -1);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 30u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r6);
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 10), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 11), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r3 + 28), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r3 + 29), static_cast<uint8_t>(r6));
    r0 = MemoryInline::FlatRead16((r5 + 9888));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r5 + 9888));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam16((r5 + 9888), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80702678
    r4 = 0x808C0000u;
    r29 = (r31 + 180);
    r4 = (r4 + 32096);
    MemoryInline::FlatWrite32(r31, r4);
    r3 = (r4 + 28);
    r5 = (r29 + 40);
    r0 = (r4 + 124);
    MemoryInline::FlatWrite32((r31 + 84), r3);
    r3 = r29;
    r4 = r31;
    MemoryInline::FlatWrite32((r31 + 148), r0);
    r6 = 2;
    ctx->lr = 0x8070093Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80086B20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r4 = 0x80080000u;
    r5 = 0x80080000u;
    r3 = (r29 + 40);
    r6 = 12;
    r4 = (r4 + 32592);
    r5 = (r5 + 32624);
    r7 = 2;
    ctx->lr = 0x8070095Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 9880));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80700968:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80700978;
    }
}

loc_8070096C:
{
    r3 = MemoryInline::FlatRead32((r30 + 10392));
    r0 = MemoryInline::FlatRead32((r3 + 256));
    MemoryInline::FlatWriteRam32((r4 + 9880), r0);
}

loc_80700978:
{
    r4 = 0x808C0000u;
    r0 = 1;
    r4 = (r4 + 31800);
    MemoryInline::FlatWrite32(r31, r4);
    r5 = (r4 + 28);
    r3 = r31;
    r4 = (r4 + 124);
    MemoryInline::FlatWrite32((r31 + 84), r5);
    MemoryInline::FlatWrite32((r31 + 148), r4);
    MemoryInline::FlatWrite32((r31 + 160), r0);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80700894 func_80700894 preserves=true fpr_mask=0x00000000
