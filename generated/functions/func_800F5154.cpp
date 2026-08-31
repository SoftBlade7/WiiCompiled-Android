#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010A9B0_statefree(uint32_t, uint32_t);

extern "C" void func_800F5154(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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
    uint32_t xer = ctx->xer;

    goto loc_800F5154;

loc_800F5154:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
}

loc_800F5160:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = MemoryInline::FlatRead32((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r0 = MemoryInline::FlatRead32((r1 + 60));
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = 1500;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = 0x802F0000u;
    r29 = (r29 + 9280);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = MemoryInline::FlatRead32((r1 + 64));
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F5194;
    }
}

loc_800F5190:
{
    r30 = r4;
}

loc_800F5194:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F5198:
{
    r31 = 1460;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F51A4;
    }
}

loc_800F51A0:
{
    r31 = r5;
}

loc_800F51A4:
{
    MemoryInline::FlatWriteRam32((r29 + 36), r6);
    r4 = r3;
    r5 = (r1 + 8);
    r3 = 0;
    MemoryInline::FlatWriteRam32((r29 + 40), r11);
    MemoryInline::FlatWriteRam32((r29 + 16), r7);
    MemoryInline::FlatWriteRam32((r29 + 20), r8);
    MemoryInline::FlatWriteRam32((r29 + 24), r9);
    MemoryInline::FlatWriteRam32((r29 + 28), r10);
    MemoryInline::FlatWriteRam32((r29 + 32), r0);
    ctx->lr = 0x800F51D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8010E9C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r7 = 0x800F0000u;
    r3 = r29;
    r5 = r31;
    r6 = r30;
    r4 = (r1 + 8);
    r7 = (r7 + 18700);
    ctx->lr = 0x800F51ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8010A918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F51F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F51FC;
    }
}

loc_800F51F4:
{
    r3 = 3;
    goto loc_800F52A8;
}

loc_800F51FC:
{
    r3 = 12;
    r4 = 1;
    r5 = 0;
    ctx->lr = 0x800F520Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800EF378u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F5210:
{
    MemoryInline::FlatWriteRam32((r29 + 4), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F5220;
    }
}

loc_800F5218:
{
    r3 = 1;
    goto loc_800F52A8;
}

loc_800F5220:
{
    r5 = 0x800F0000u;
    r3 = 60;
    r5 = (r5 + 18588);
    r4 = 1;
    ctx->lr = 0x800F5234u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800EF378u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F5238:
{
    MemoryInline::FlatWriteRam32((r29 + 8), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F5248;
    }
}

loc_800F5240:
{
    r3 = 1;
    goto loc_800F52A8;
}

loc_800F5248:
{
    r4 = 0x800F0000u;
    r3 = MemoryInline::FlatRead32(r29);
    r4 = (r4 + 20308);
    // inline leaf 0x8010ACFC (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 48), r4);
    // end of inlined leaf 0x8010ACFC
    r4 = 0x800F0000u;
    r3 = MemoryInline::FlatRead32(r29);
    r4 = (r4 + 20456);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8010A9B0u) && KnownTranslatedCpuCall<0x8010A9B0u>::kAvailable && !KnownTranslatedCpuCall<0x8010A9B0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8010A9B0u>()) {
        func_8010A9B0_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8010A9B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32(r29);
    // inline leaf 0x8010ACCC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x8010ACCC
    MemoryInline::FlatWriteRam32((r29 + 52), r3);
    r3 = MemoryInline::FlatRead32(r29);
    // inline leaf 0x8010ACD4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x8010ACD4
    r4 = 0;
    r0 = 1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_800F5288:
{
    MemoryInline::FlatWriteRam16((r29 + 56), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam32((r29 + 48), r4);
    MemoryInline::FlatWriteRam32((r29 + 12), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F52A0;
    }
}

loc_800F5298:
{
    MemoryInline::FlatWriteRam32((r29 + 44), r28);
    goto loc_800F52A4;
}

loc_800F52A0:
{
    MemoryInline::FlatWriteRam32((r29 + 44), r4);
}

loc_800F52A4:
{
    r3 = 0;
}

loc_800F52A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800F5154 func_800F5154 preserves=true fpr_mask=0x00000000
