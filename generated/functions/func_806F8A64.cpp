#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F8A64(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_806F8A64;

loc_806F8A64:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r4 = MemoryInline::FlatRead32((r4 + 10320));
    r0 = MemoryInline::FlatRead8((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F8A8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F8B44;
    }
}

loc_806F8A90:
{
    r4 = MemoryInline::FlatRead16((r3 + 38));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806F8A98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F8AA8;
    }
}

loc_806F8A9C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 38), static_cast<uint16_t>(r0));
    goto loc_806F8B44;
}

loc_806F8AA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F8B44;
    }
}

loc_806F8AAC:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F8AB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F8B3C;
    }
}

loc_806F8AB8:
{
    r3 = MemoryInline::FlatRead32(r3);
    r30 = 0;
}

loc_806F8AC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806F8AD8;
    }
}

loc_806F8AC8:
{
    // inline leaf 0x8008E8B0 (8 guest instruction(s))
}

loc_inl0_0x8008E8B0:
{
    r0 = MemoryInline::FlatRead32((r3 + 124));
    r3 = 1;
}

loc_inl0_0x8008E8BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8008E8C0:
{
}

loc_inl0_0x8008E8C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8008E8C8:
{
    r3 = 0;
    goto loc_inl0_cont_8008E8B0;
}

loc_inl0_return:
{
}

loc_inl0_cont_8008E8B0:
{
    // end of inlined leaf 0x8008E8B0
}

loc_806F8AD0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806F8AD8;
    }
}

loc_806F8AD4:
{
    r30 = 1;
}

loc_806F8AD8:
{
}

loc_806F8ADC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_806F8AFC;
    }
}

loc_806F8AE0:
{
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F8AEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F8AFC;
    }
}

loc_806F8AF0:
{
    r4 = 0;
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E520u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_806F8AFC:
{
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r3 = MemoryInline::FlatRead32(r3);
}

loc_806F8B08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806F8B10;
    }
}

loc_806F8B0C:
{
    // inline leaf 0x8008E310 (6 guest instruction(s))
}

loc_inl1_0x8008E310:
{
    r0 = MemoryInline::FlatRead8((r3 + 121));
}

loc_inl1_0x8008E318:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8008E31C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 120), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_8008E310;
}

loc_inl1_return:
{
}

loc_inl1_cont_8008E310:
{
    // end of inlined leaf 0x8008E310
}

loc_806F8B10:
{
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r4 = MemoryInline::FlatRead32((r4 + 9004));
    MemoryInline::FlatWrite32((r4 + 184), r3);
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F8B28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F8B34;
    }
}

loc_806F8B2C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_806F8B38;
}

loc_806F8B34:
{
    r0 = -1;
}

loc_806F8B38:
{
    MemoryInline::FlatWrite32((r4 + 188), r0);
}

loc_806F8B3C:
{
    r0 = -1;
    MemoryInline::FlatWrite16((r31 + 38), static_cast<uint16_t>(r0));
}

loc_806F8B44:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 9004));
    ctx->lr = 0x806F8B50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F9CE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 9008));
    ctx->lr = 0x806F8B5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FA420u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x806F8B64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FA738u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806F8A64 func_806F8A64 preserves=true fpr_mask=0x00000000
