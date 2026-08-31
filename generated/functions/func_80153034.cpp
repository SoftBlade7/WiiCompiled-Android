#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80153034(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80153034;

loc_80153034:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 + -25816);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r5 + 1044));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80153060:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015307C;
    }
}

loc_80153064:
{
    r3 = 589824;
    r4 = 0x80280000u;
    r5 = r31;
    r3 = (r3 + 3);
    r4 = (r4 + 29460);
    ctx->lr = 0x8015307Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8015307C:
{
    r0 = MemoryInline::FlatRead8((r31 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80153084:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80153098;
    }
}

loc_80153088:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r3 + -6);
    MemoryInline::FlatWrite16((r30 + 106), static_cast<uint16_t>(r0));
    goto loc_801530A0;
}

loc_80153098:
{
    r0 = 666;
    MemoryInline::FlatWrite16((r30 + 106), static_cast<uint16_t>(r0));
}

loc_801530A0:
{
    r0 = 0;
    r4 = r31;
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 32), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r30 + 104));
    ctx->lr = 0x801530C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014A708u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r30 + 108));
    r3 = 1;
    MemoryInline::FlatWrite8((r30 + 111), static_cast<uint8_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801530D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015310C;
    }
}

loc_801530D4:
{
    r0 = MemoryInline::FlatRead8((r30 + 110));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801530DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015310C;
    }
}

loc_801530E0:
{
    r0 = MemoryInline::FlatRead8((r30 + 109));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801530E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80153104;
    }
}

loc_801530EC:
{
    r0 = 3;
    r3 = r30;
    MemoryInline::FlatWrite8((r30 + 108), static_cast<uint8_t>(r0));
    r4 = 0;
    ctx->lr = 0x80153100u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801547F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8015310C;
}

loc_80153104:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 108), static_cast<uint8_t>(r0));
}

loc_8015310C:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80153034 func_80153034 preserves=true fpr_mask=0x00000000
