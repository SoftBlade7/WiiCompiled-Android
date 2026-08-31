#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80868638(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80868638;

loc_80868638:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80622EA0 (10 guest instruction(s))
}

loc_inl0_0x80622EA0:
{
    r4 = MemoryInline::FlatRead32((r3 + 892));
}

loc_inl0_0x80622EA8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1))) {
        goto loc_inl0_0x80622EB4;
    }
}

loc_inl0_0x80622EAC:
{
    r3 = 0;
    goto loc_inl0_cont_80622EA0;
}

loc_inl0_0x80622EB4:
{
    r0 = (r4 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 852));
}

loc_inl0_cont_80622EA0:
{
    // end of inlined leaf 0x80622EA0
    r0 = MemoryInline::FlatRead8((r30 + 36));
    r31 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8086866C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808686FC;
    }
}

loc_80868670:
{
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r0 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80868678:
{
    MemoryInline::FlatWrite32((r30 + 28), r0);
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_808686FC;
    }
}

loc_80868680:
{
    r5 = MemoryInline::FlatRead32((r30 + 24));
    r0 = (r5 + 65536);
}

loc_8086868C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_808686EC;
    }
}

loc_80868690:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(87));
}

loc_80868694:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808686EC;
    }
}

loc_80868698:
{
    r3 = 0x809C0000u;
    r4 = (r30 + 20);
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 176));
    ctr = r12;
    ctx->lr = 0x808686B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808686B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808686EC;
    }
}

loc_808686BC:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
}

loc_808686C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_808686D4;
    }
}

loc_808686C8:
{
    r0 = 10;
    MemoryInline::FlatWrite32((r30 + 40), r0);
    goto loc_808686EC;
}

loc_808686D4:
{
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r0 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_808686DC:
{
    MemoryInline::FlatWrite32((r30 + 40), r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_808686EC;
    }
}

loc_808686E4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 40), r0);
}

loc_808686EC:
{
    r3 = -1;
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 24), r3);
    MemoryInline::FlatWrite8((r30 + 36), static_cast<uint8_t>(r0));
}

loc_808686FC:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80868704:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086875C;
    }
}

loc_80868708:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(87));
}

loc_80868710:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80868744;
    }
}

loc_80868714:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(87));
}

loc_80868718:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80868744;
    }
}

loc_8086871C:
{
    r3 = MemoryInline::FlatRead32((r30 + 9280));
    r4 = 65536;
    r6 = 0x808B0000u;
    r5 = 30;
    r12 = MemoryInline::FlatRead32((r3 + 8));
    r4 = (r4 + -1);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8128));
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80868744u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80868744:
{
    r3 = MemoryInline::FlatRead32((r30 + 9280));
    r12 = MemoryInline::FlatRead32((r3 + 8));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80868758u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 32), r31);
}

loc_8086875C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80868638 func_80868638 preserves=true fpr_mask=0x00000000
