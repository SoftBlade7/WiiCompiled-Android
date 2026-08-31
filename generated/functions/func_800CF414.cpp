#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF414(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800CF414;

loc_800CF414:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    r0 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800CF440:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CF450;
    }
}

loc_800CF444:
{
    // inline leaf 0x800D0CDC (10 guest instruction(s))
}

loc_inl0_0x800D0CDC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26904));
}

loc_inl0_0x800D0CE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x800D0CFC;
    }
}

loc_inl0_0x800D0CE8:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_0x800D0CF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_inl0_0x800D0CFC;
    }
}

loc_inl0_0x800D0CF4:
{
    r3 = 1;
    goto loc_inl0_cont_800D0CDC;
}

loc_inl0_0x800D0CFC:
{
    r3 = 0;
}

loc_inl0_cont_800D0CDC:
{
    // end of inlined leaf 0x800D0CDC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CF44C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CF458;
    }
}

loc_800CF450:
{
    r3 = 0;
    goto loc_800CF4C8;
}

loc_800CF458:
{
    // inline leaf 0x800D0274 (7 guest instruction(s))
}

loc_inl1_0x800D0274:
{
    r3 = MemoryInline::FlatRead32((r13 + -26904));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x800D027C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x800D0288;
    }
}

loc_inl1_0x800D0280:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    goto loc_inl1_cont_800D0274;
}

loc_inl1_0x800D0288:
{
    r3 = 0;
}

loc_inl1_cont_800D0274:
{
    // end of inlined leaf 0x800D0274
    r4 = r31;
    ctx->lr = 0x800CF464u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800EC498u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CF468:
{
    r31 = r3;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CF494;
    }
}

loc_800CF470:
{
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    r4 = r31;
    r5 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x800CF484u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800FC1C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CF488:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CF494;
    }
}

loc_800CF48C:
{
    r3 = 0;
    goto loc_800CF4C8;
}

loc_800CF494:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800CF498:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CF4A8;
    }
}

loc_800CF49C:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_800CF4A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CF4B0;
    }
}

loc_800CF4A8:
{
    r3 = 0;
    goto loc_800CF4C8;
}

loc_800CF4B0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    r5 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x800CF4C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800FBFE8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 255);
}

loc_800CF4C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800CF414 func_800CF414 preserves=true fpr_mask=0x00000000
