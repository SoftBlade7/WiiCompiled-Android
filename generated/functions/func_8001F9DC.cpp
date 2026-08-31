#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001F9DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001F9DC;

loc_8001F9DC:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(33));
}

loc_8001F9E8:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 40), r26);
    MemoryInline::FlatWriteRam32((r1 + 44), r27);
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001FA10;
    }
}

loc_8001FA08:
{
    r3 = 1793;
    goto loc_8001FB04;
}

loc_8001FA10:
{
    r6 = 0x80270000u;
    r31 = 0;
    r6 = (r6 + 7080);
    r0 = MemoryInline::FlatRead32((r6 + 12));
    r5 = MemoryInline::FlatRead32(r6);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r3 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    MemoryInline::FlatWriteRam8((r6 + 13), static_cast<uint8_t>(r31));
    // inline leaf 0x8001F5C0 (2 guest instruction(s))
    r3 = ctx->msr;
    // end of inlined leaf 0x8001F5C0
    r3 = (r3 | 8192);
    // inline leaf 0x8001F5C8 (2 guest instruction(s))
    ctx->msr = r3;
    // end of inlined leaf 0x8001F5C8
    MemoryInline::FlatWrite32(r29, r31);
    r3 = 0;
    goto loc_8001FAB0;
}

loc_8001FA58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8001FA5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001FA84;
    }
}

loc_8001FA60:
{
    r4 = r26;
    r5 = r30;
    r3 = (r1 + 8);
    ctx->lr = 0x8001FA70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020A30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = r28;
    r6 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = 0x8001FA80u;
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
    InvokeDirectCpu<0x8001D4C0u>(ctx);
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
    goto loc_8001FAA0;
}

loc_8001FA84:
{
    r3 = r28;
    r4 = (r1 + 8);
    ctx->lr = 0x8001FA90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001D708u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r26;
    r5 = r30;
    r3 = (r1 + 8);
    ctx->lr = 0x8001FAA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020A30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8001FAA0:
{
    r4 = MemoryInline::FlatRead32(r29);
    r26 = (r26 + 1);
    r0 = (r4 + 8);
    MemoryInline::FlatWrite32(r29, r0);
}

loc_8001FAB0:
{
}

loc_8001FAB4:
{
    if ((static_cast<uint32_t>(r26) > static_cast<uint32_t>(r27))) {
        goto loc_8001FAC0;
    }
}

loc_8001FAB8:
{
}

loc_8001FABC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8001FA58;
    }
}

loc_8001FAC0:
{
    r4 = 0x80270000u;
    r4 = (r4 + 7080);
    r0 = MemoryInline::FlatRead8((r4 + 13));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001FAD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001FAE0;
    }
}

loc_8001FAD4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r29, r0);
    r3 = 1794;
}

loc_8001FAE0:
{
    r6 = MemoryInline::FlatRead32((r1 + 16));
    r7 = 0x80270000u;
    MemoryInline::FlatWriteRam32((r7 + 7080), r6);
    r7 = (r7 + 7080);
    r5 = MemoryInline::FlatRead32((r1 + 20));
    r4 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam32((r7 + 4), r5);
    MemoryInline::FlatWriteRam32((r7 + 8), r4);
    MemoryInline::FlatWriteRam32((r7 + 12), r0);
}

loc_8001FB04:
{
    r26 = MemoryInline::FlatRead32((r1 + 40));
    r27 = MemoryInline::FlatRead32((r1 + 44));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
// RECOMP_REGISTRATION base 0x8001F9DC func_8001F9DC preserves=true fpr_mask=0x00000000
