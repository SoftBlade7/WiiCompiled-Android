#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805DD5AC(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805DD5AC;

loc_805DD5AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWrite32((r3 + 864), r0);
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 636));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805DD5E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DD5F0;
    }
}

loc_805DD5E8:
{
    r29 = 0;
    goto loc_805DD644;
}

loc_805DD5F0:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7208);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DD640;
    }
}

loc_805DD5FC:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DD610u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
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
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DD628;
}

loc_805DD614:
{
}

loc_805DD618:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805DD624;
    }
}

loc_805DD61C:
{
    r0 = 1;
    goto loc_805DD634;
}

loc_805DD624:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DD628:
{
}

loc_805DD62C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DD614;
    }
}

loc_805DD630:
{
    r0 = 0;
}

loc_805DD634:
{
}

loc_805DD638:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DD640;
    }
}

loc_805DD63C:
{
    goto loc_805DD644;
}

loc_805DD640:
{
    r29 = 0;
}

loc_805DD644:
{
    r0 = MemoryInline::FlatRead32((r31 + 848));
}

loc_805DD64C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805DD66C;
    }
}

loc_805DD650:
{
}

loc_805DD654:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_805DD66C;
    }
}

loc_805DD658:
{
}

loc_805DD65C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DD678;
    }
}

loc_805DD660:
{
}

loc_805DD664:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805DD678;
    }
}

loc_805DD668:
{
    goto loc_805DD680;
}

loc_805DD66C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 3508), r0);
    goto loc_805DD680;
}

loc_805DD678:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 3508), r0);
}

loc_805DD680:
{
    r0 = MemoryInline::FlatRead32((r31 + 848));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805DD688:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DD6A8;
    }
}

loc_805DD68C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805DD690:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DD6C8;
    }
}

loc_805DD694:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805DD698:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DD6E4;
    }
}

loc_805DD69C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_805DD6A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DD6F0;
    }
}

loc_805DD6A4:
{
    goto loc_805DD6F8;
}

loc_805DD6A8:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r31 + 852));
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    r5 = MemoryInline::FlatRead8((r31 + 856));
    ctx->lr = 0x805DD6BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80656704u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 860), r0);
    goto loc_805DD6F8;
}

loc_805DD6C8:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r31 + 856));
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    ctx->lr = 0x805DD6D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806567D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 860), r0);
    goto loc_805DD6F8;
}

loc_805DD6E4:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 860), r0);
    goto loc_805DD6F8;
}

loc_805DD6F0:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 860), r0);
}

loc_805DD6F8:
{
    r4 = 0x80890000u;
    r3 = (r31 + 836);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 19260));
    // inline leaf 0x805C3C2C (6 guest instruction(s))
    r4 = 0;
    r0 = -1;
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x805C3C2C
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
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805DD5AC func_805DD5AC preserves=true fpr_mask=0x00000000
