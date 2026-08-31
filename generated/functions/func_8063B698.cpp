#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8063B698(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8063B698;

loc_8063B698:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead32((r3 + 356));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8063B6C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8063B6D4;
    }
}

loc_8063B6CC:
{
    r30 = 0;
    goto loc_8063B728;
}

loc_8063B6D4:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 7788);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063B724;
    }
}

loc_8063B6E0:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8063B6F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8063B70C;
}

loc_8063B6F8:
{
}

loc_8063B6FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_8063B708;
    }
}

loc_8063B700:
{
    r0 = 1;
    goto loc_8063B718;
}

loc_8063B708:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8063B70C:
{
}

loc_8063B710:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8063B6F8;
    }
}

loc_8063B714:
{
    r0 = 0;
}

loc_8063B718:
{
}

loc_8063B71C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8063B724;
    }
}

loc_8063B720:
{
    goto loc_8063B728;
}

loc_8063B724:
{
    r30 = 0;
}

loc_8063B728:
{
    r0 = MemoryInline::FlatRead8((r30 + 840));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8063B730:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063B7B4;
    }
}

loc_8063B734:
{
    r0 = MemoryInline::FlatRead32((r30 + 844));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8063B73C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063B764;
    }
}

loc_8063B740:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8063B744:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063B774;
    }
}

loc_8063B748:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8063B74C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063B784;
    }
}

loc_8063B750:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8063B754:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063B794;
    }
}

loc_8063B758:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8063B75C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063B7A4;
    }
}

loc_8063B760:
{
    goto loc_8063B7C0;
}

loc_8063B764:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -30080);
    r5 = (r3 + 150);
    goto loc_8063B7C0;
}

loc_8063B774:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -30080);
    r5 = (r3 + 162);
    goto loc_8063B7C0;
}

loc_8063B784:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -30080);
    r5 = (r3 + 174);
    goto loc_8063B7C0;
}

loc_8063B794:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -30080);
    r5 = (r3 + 185);
    goto loc_8063B7C0;
}

loc_8063B7A4:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -30080);
    r5 = (r3 + 196);
    goto loc_8063B7C0;
}

loc_8063B7B4:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -30080);
    r5 = (r3 + 207);
}

loc_8063B7C0:
{
    r4 = 0x808A0000u;
    r3 = (r29 + 68);
    r4 = (r4 + -30080);
    r4 = (r4 + 224);
    ctx->lr = 0x8063B7D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063E0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8063B698 func_8063B698 preserves=true fpr_mask=0x00000000
