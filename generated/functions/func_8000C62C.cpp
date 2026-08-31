#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000C62C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addic_src_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000C62C;

loc_8000C62C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0x80240000u;
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = (r6 + 24616);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    goto loc_8000C65C;
}

loc_8000C654:
{
    r6 = (r6 + 4);
    r7 = (r7 + 1);
}

loc_8000C65C:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_8000C664:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(r0))) {
        goto loc_8000C654;
    }
}

loc_8000C668:
{
    r6 = (r4 + -4);
    r4 = MemoryInline::FlatRead32((r4 + -4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8000C680:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000C6EC;
    }
}

loc_8000C684:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8000C68C:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r4))) {
        goto loc_8000C6EC;
    }
}

loc_8000C690:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8000C698:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8000C6B4;
    }
}

loc_8000C69C:
{
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_8000C6EC;
}

loc_8000C6B4:
{
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r5, r0);
    r5 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r4 + 4), r5);
    r5 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32(r4, r5);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r3 + 8), r4);
}

loc_8000C6EC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r6 + 4), r0);
    MemoryInline::FlatWrite32((r4 + 12), r6);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r0_addic_src_0 = r0;
    r0 = (r0_addic_src_0 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addic_src_0)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000C700:
{
    MemoryInline::FlatWrite32((r4 + 16), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000C800;
    }
}

loc_8000C708:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8000C710:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8000C71C;
    }
}

loc_8000C714:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_8000C71C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8000C724:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8000C730;
    }
}

loc_8000C728:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_8000C730:
{
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8000C750:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8000C75C;
    }
}

loc_8000C754:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_8000C75C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8000C764:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000C770;
    }
}

loc_8000C768:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_8000C770:
{
    r4 = (r4 + -8);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r30 = (r0 & -2);
    r3 = r30;
    ctx->lr = 0x8000C784u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000C434u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r5 = 0;
    r0 = (r3 & 2);
}

loc_8000C790:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000C7B0;
    }
}

loc_8000C794:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r4 = (r3 & -8);
    r3 = (r0 & -8);
    r0 = (r3 + -24);
}

loc_8000C7A8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8000C7B0;
    }
}

loc_8000C7AC:
{
    r5 = 1;
}

loc_8000C7B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8000C7B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000C800;
    }
}

loc_8000C7B8:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
}

loc_8000C7C0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r30))) {
        goto loc_8000C7C8;
    }
}

loc_8000C7C4:
{
    r4 = 0;
}

loc_8000C7C8:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_8000C7D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_8000C7D8;
    }
}

loc_8000C7D4:
{
    MemoryInline::FlatWrite32(r31, r4);
}

loc_8000C7D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8000C7DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000C7EC;
    }
}

loc_8000C7E0:
{
    r3 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32(r4, r3);
    MemoryInline::FlatWrite32((r3 + 4), r4);
}

loc_8000C7EC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r3 = r30;
    MemoryInline::FlatWrite32(r30, r0);
    ctx->lr = 0x8000C800u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80020D20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8000C800:
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
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8000C62C func_8000C62C preserves=true fpr_mask=0x00000000
