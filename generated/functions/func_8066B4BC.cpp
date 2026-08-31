#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066B4BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8066B4BC;

loc_8066B4BC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 16880));
    r0 = MemoryInline::FlatRead8((r6 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8066B4E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066B4F4;
    }
}

loc_8066B4EC:
{
    r3 = 0;
    goto loc_8066B5D4;
}

loc_8066B4F4:
{
    r4 = 65536;
    r3 = 0x809C0000u;
    r0 = (r4 + -29504);
    r6 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = (r5 * r0);
    r3 = MemoryInline::FlatRead32((r6 + 20));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -1380646912);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20548));
}

loc_8066B51C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066B5D0;
    }
}

loc_8066B520:
{
    r0 = (r4 + -27664);
    r0 = (r5 * r0);
    r3 = (r6 + r0);
    r30 = (r3 + 56);
    r3 = (r30 + 65536);
    r3 = (r3 + -28744);
    // inline leaf 0x800EC150 (13 guest instruction(s))
}

loc_inl0_0x800EC150:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r4 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_1 & 3);
}

loc_inl0_0x800EC160:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl0_0x800EC174;
    }
}

loc_inl0_0x800EC164:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_inl0_0x800EC16C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl0_0x800EC174;
    }
}

loc_inl0_0x800EC170:
{
    r4 = 1;
}

loc_inl0_0x800EC174:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl0_cont_800EC150:
{
    // end of inlined leaf 0x800EC150
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066B540:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066B5C8;
    }
}

loc_8066B544:
{
    r4 = MemoryInline::FlatRead32((r29 + 16880));
    r3 = (r30 + 65536);
    r0 = 4;
    r3 = MemoryInline::FlatRead32((r3 + -28716));
    r6 = r4;
    r5 = 0;
    ctr = r0;
}

loc_8066B560:
{
    r0 = MemoryInline::FlatRead32((r6 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8066B568:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066B5B4;
    }
}

loc_8066B56C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3 = (r4 + r0);
    r5 = MemoryInline::FlatRead32((r3 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8066B57C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066B588;
    }
}

loc_8066B580:
{
    r3 = 0;
    goto loc_8066B5D4;
}

loc_8066B588:
{
    r3 = 65536;
    r0 = (r3 + 24576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_8066B594:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066B5A0;
    }
}

loc_8066B598:
{
    r3 = 0;
    goto loc_8066B5D4;
}

loc_8066B5A0:
{
    r4 = (r4 + r5);
    r3 = r31;
    r5 = 6;
    ctx->lr = 0x8066B5B0u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8067512Cu>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8066B5D4;
}

loc_8066B5B4:
{
    r6 = (r6 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8066B560;
    }
}

loc_8066B5C0:
{
    r3 = 0;
    goto loc_8066B5D4;
}

loc_8066B5C8:
{
    r3 = 0;
    goto loc_8066B5D4;
}

loc_8066B5D0:
{
    r3 = 0;
}

loc_8066B5D4:
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8066B4BC func_8066B4BC preserves=true fpr_mask=0x00000000
