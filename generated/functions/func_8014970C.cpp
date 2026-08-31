#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014970C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;

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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8014970C;

loc_8014970C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 4;
    r5 = (r5 + -28872);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    r4 = 0;
    ctr = r0;
}

loc_8014973C:
{
    r0 = (r4 & 255);
    r0 = (r0 * 52);
    r6 = (r5 + r0);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_80149750:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149778;
    }
}

loc_80149754:
{
    r0 = MemoryInline::FlatRead8((r6 + 16));
}

loc_8014975C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149778;
    }
}

loc_80149760:
{
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_80149768:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80149840;
    }
}

loc_8014976C:
{
    r0 = MemoryInline::FlatRead16((r6 + 22));
}

loc_80149774:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80149840;
    }
}

loc_80149778:
{
    r4 = (r4 + 1);
    r0 = (r4 & 255);
    r0 = (r0 * 52);
    r6 = (r5 + r0);
    r5_addr_3 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_3);
}

loc_80149790:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801497B8;
    }
}

loc_80149794:
{
    r0 = MemoryInline::FlatRead8((r6 + 16));
}

loc_8014979C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801497B8;
    }
}

loc_801497A0:
{
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_801497A8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80149840;
    }
}

loc_801497AC:
{
    r0 = MemoryInline::FlatRead16((r6 + 22));
}

loc_801497B4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80149840;
    }
}

loc_801497B8:
{
    r4 = (r4 + 1);
    r0 = (r4 & 255);
    r0 = (r0 * 52);
    r6 = (r5 + r0);
    r5_addr_4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_4);
}

loc_801497D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801497F8;
    }
}

loc_801497D4:
{
    r0 = MemoryInline::FlatRead8((r6 + 16));
}

loc_801497DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801497F8;
    }
}

loc_801497E0:
{
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_801497E8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80149840;
    }
}

loc_801497EC:
{
    r0 = MemoryInline::FlatRead16((r6 + 22));
}

loc_801497F4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80149840;
    }
}

loc_801497F8:
{
    r4 = (r4 + 1);
    r0 = (r4 & 255);
    r0 = (r0 * 52);
    r6 = (r5 + r0);
    r5_addr_5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_5);
}

loc_80149810:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149838;
    }
}

loc_80149814:
{
    r0 = MemoryInline::FlatRead8((r6 + 16));
}

loc_8014981C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149838;
    }
}

loc_80149820:
{
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_80149828:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80149840;
    }
}

loc_8014982C:
{
    r0 = MemoryInline::FlatRead16((r6 + 22));
}

loc_80149834:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80149840;
    }
}

loc_80149838:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8014973C;
    }
}

loc_80149840:
{
    r0 = (r4 & 255);
}

loc_80149848:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_80149860;
    }
}

loc_8014984C:
{
    r0 = (r0 * 52);
    r4 = 0x80340000u;
    r4 = (r4 + -28872);
    r31 = (r4 + r0);
    r31 = (r31 + 16);
}

loc_80149860:
{
}

loc_80149864:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80149898;
    }
}

loc_80149868:
{
    r4 = 0x80340000u;
    r4 = (r4 + -28872);
    r0 = MemoryInline::FlatRead8((r4 + 1025));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80149878:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801498EC;
    }
}

loc_8014987C:
{
    r4 = 0x80280000u;
    r6 = 1966080;
    r5 = r3;
    r3 = (r6 + 1);
    r4 = (r4 + 21504);
    ctx->lr = 0x80149894u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131758u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801498EC;
}

loc_80149898:
{
    r4 = 0x80340000u;
    r4 = (r4 + -28872);
    r0 = MemoryInline::FlatRead8((r4 + 1025));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_801498A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801498C8;
    }
}

loc_801498AC:
{
    r4 = 0x80280000u;
    r7 = 1966080;
    r5 = r3;
    r6 = r30;
    r3 = (r7 + 3);
    r4 = (r4 + 21560);
    ctx->lr = 0x801498C8u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131770u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801498C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801498CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801498E0;
    }
}

loc_801498D0:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_801498EC;
}

loc_801498E0:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r0 & -33);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
}

loc_801498EC:
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8014970C func_8014970C preserves=true fpr_mask=0x00000000
