#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010D664(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8010D664;

loc_8010D664:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    r4 = 5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r6 + 68));
    r6 = (r1 + 8);
    r5 = (r5 + r0);
    r5 = (r5 + 7);
    ctx->lr = 0x8010D6A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8010D124u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8010D6A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010D6B4;
    }
}

loc_8010D6AC:
{
    r3 = 0;
    goto loc_8010D73C;
}

loc_8010D6B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8010D6BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010D6C8;
    }
}

loc_8010D6C0:
{
    r3 = 1;
    goto loc_8010D73C;
}

loc_8010D6C8:
{
    r4 = r30;
    r5 = r31;
    r3 = (r29 + 80);
    ctx->lr = 0x8010D6D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801098CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 96));
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 96));
    r4 = (r4 + -1);
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl1_0x800EF4B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl1_0x800EF4B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl1_0x800EF4C4;
    }
}

loc_inl1_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_inl1_0x800EF4C0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl1_0x800EF4CC;
    }
}

loc_inl1_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl1_cont_800EF4B0;
}

loc_inl1_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl1_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r5 = r3;
    r0 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r29 + 80));
    r3 = r29;
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r4 = (r4 + r0);
    ctx->lr = 0x8010D70Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8010A4CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8010D710:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8010D71C;
    }
}

loc_8010D714:
{
    r3 = 0;
    goto loc_8010D728;
}

loc_8010D71C:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWrite32((r29 + 144), r0);
}

loc_8010D728:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8010D72C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010D738;
    }
}

loc_8010D730:
{
    r3 = 0;
    goto loc_8010D73C;
}

loc_8010D738:
{
    r3 = 1;
}

loc_8010D73C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8010D664 func_8010D664 preserves=true fpr_mask=0x00000000
