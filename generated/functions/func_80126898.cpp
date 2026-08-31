#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126898(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80126898;

loc_80126898:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r13 + -26332));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801268AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80126938;
    }
}

loc_801268B0:
{
    r0 = MemoryInline::FlatRead32((r13 + -26320));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801268B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801268CC;
    }
}

loc_801268BC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26320), r0);
    ctx->lr = 0x801268C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80126638u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801268E0;
}

loc_801268CC:
{
    r0 = 2;
    r3 = 0x80300000u;
    MemoryInline::FlatWrite32((r13 + -26320), r0);
    r3 = (r3 + -32352);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D57Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_801268E0:
{
    r0 = MemoryInline::FlatRead32((r13 + -26352));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801268E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80126938;
    }
}

loc_801268EC:
{
    r0 = MemoryInline::FlatRead32((r13 + -26316));
    r3 = 0x802F0000u;
    r3 = (r3 + 32032);
    r4 = 384;
    r0 = (r0 * 384);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80123FCCu>(ctx);
    r4 = MemoryInline::FlatRead32((r13 + -26316));
    r3 = -1431633920;
    r3 = (r3 + -21845);
    r0 = MemoryInline::FlatRead32((r13 + -26312));
    r4 = (r4 + 1);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r4)) >> 32));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 2147483647);
    r3 = (r3 * 3);
    r4 = (r4 - r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80126930:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80126938;
    }
}

loc_80126934:
{
    MemoryInline::FlatWrite32((r13 + -26316), r4);
}

loc_80126938:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80126898 func_80126898 preserves=true fpr_mask=0x00000000
