#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014F7D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8014F7D0;

loc_8014F7D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead8(r3);
    r31 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014F7F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014F95C;
    }
}

loc_8014F7F8:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131D7Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_8014F818;
}

loc_8014F80C:
{
    r3 = (r30 + 112);
    ctx->lr = 0x8014F814u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012F4D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctx->lr = 0x8014F818u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8014F818:
{
    r0 = MemoryInline::FlatRead32((r30 + 112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014F820:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014F80C;
    }
}

loc_8014F824:
{
    r4 = 0;
    MemoryInline::FlatWrite32((r30 + 16), r4);
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_8014F834:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_8014F850;
    }
}

loc_8014F838:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
}

loc_8014F840:
{
    MemoryInline::FlatWrite32((r31 + 8), r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8014F884;
    }
}

loc_8014F848:
{
    MemoryInline::FlatWrite32((r3 + 12), r4);
    goto loc_8014F884;
}

loc_8014F850:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_8014F858:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_8014F86C;
    }
}

loc_8014F85C:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
    MemoryInline::FlatWrite32((r31 + 12), r3);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    goto loc_8014F884;
}

loc_8014F86C:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MemoryInline::FlatRead32((r30 + 8));
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_8014F884:
{
    r4 = 0x80340000u;
    r4 = (r4 + -27840);
    r0 = MemoryInline::FlatRead32((r4 + 1968));
}

loc_8014F894:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8014F8B0;
    }
}

loc_8014F898:
{
    MemoryInline::FlatWriteRam32((r4 + 1968), r30);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r4 + 1972), r30);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    goto loc_8014F8CC;
}

loc_8014F8B0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 8), r0);
    r0 = MemoryInline::FlatRead32((r4 + 1972));
    MemoryInline::FlatWrite32((r30 + 12), r0);
    r3 = MemoryInline::FlatRead32((r4 + 1972));
    MemoryInline::FlatWrite32((r3 + 8), r30);
    MemoryInline::FlatWriteRam32((r4 + 1972), r30);
}

loc_8014F8CC:
{
    r0 = MemoryInline::FlatRead8(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014F8D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014F95C;
    }
}

loc_8014F8D8:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8014F8E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014F95C;
    }
}

loc_8014F8E4:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014F8EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014F95C;
    }
}

loc_8014F8F0:
{
    r3 = MemoryInline::FlatRead16((r31 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8014F8F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014F944;
    }
}

loc_8014F8FC:
{
    r3 = MemoryInline::FlatRead16((r31 + 40));
    r4 = 19;
    ctx->lr = 0x8014F908u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801411A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
}

loc_8014F910:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8014F924;
    }
}

loc_8014F914:
{
    r0 = 5;
    r3 = 30;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_8014F944;
}

loc_8014F924:
{
}

loc_8014F928:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8014F940;
    }
}

loc_8014F92C:
{
    r0 = 5;
    r3 = 65536;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r3 = (r3 + -1);
    goto loc_8014F944;
}

loc_8014F940:
{
    r3 = 1;
}

loc_8014F944:
{
    r5 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(65535));
}

loc_8014F94C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014F95C;
    }
}

loc_8014F950:
{
    r3 = (r31 + 16);
    r4 = 2;
    ctx->lr = 0x8014F95Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131D0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8014F95C:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xF00010FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8014F7D0 func_8014F7D0 preserves=true fpr_mask=0x00000000
