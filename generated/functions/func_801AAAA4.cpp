#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AAAA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AAAA4;

loc_801AAAA4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r5 = 0x80340000u;
    r31 = r3;
    r5 = (r5 + 30640);
    r6 = 0;
    r3 = 1;
    goto loc_801AAB58;
}

loc_801AAAD8:
{
    r4 = MemoryInline::FlatRead32((r8 + 736));
}

loc_801AAAE0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801AAAEC;
    }
}

loc_801AAAE4:
{
    MemoryInline::FlatWrite32((r30 + 4), r6);
    goto loc_801AAAF0;
}

loc_801AAAEC:
{
    MemoryInline::FlatWrite32((r4 + 740), r6);
}

loc_801AAAF0:
{
    MemoryInline::FlatWrite32(r30, r4);
    MemoryInline::FlatWrite16((r8 + 712), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead32((r8 + 716));
}

loc_801AAB00:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_801AAB58;
    }
}

loc_801AAB04:
{
    r0 = MemoryInline::FlatRead32((r8 + 720));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r4 = (r5 + r0);
    MemoryInline::FlatWrite32((r8 + 732), r4);
    r7 = MemoryInline::FlatRead32((r4 + 4));
}

loc_801AAB1C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_801AAB28;
    }
}

loc_801AAB20:
{
    MemoryInline::FlatWrite32(r4, r8);
    goto loc_801AAB2C;
}

loc_801AAB28:
{
    MemoryInline::FlatWrite32((r7 + 736), r8);
}

loc_801AAB2C:
{
    MemoryInline::FlatWrite32((r8 + 740), r7);
    MemoryInline::FlatWrite32((r8 + 736), r6);
    r4 = MemoryInline::FlatRead32((r8 + 732));
    MemoryInline::FlatWrite32((r4 + 4), r8);
    r0 = MemoryInline::FlatRead32((r8 + 720));
    r4 = MemoryInline::FlatRead32((r13 + -25312));
    r0_subfic_ra_2 = r0;
    r0 = (31 - r0_subfic_ra_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(31) >= static_cast<uint32_t>(r0_subfic_ra_2) ? 1u : 0u) << 29);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r13 + -25312), r0);
    MemoryInline::FlatWrite32((r13 + -25316), r3);
}

loc_801AAB58:
{
    r8 = MemoryInline::FlatRead32(r30);
}

loc_801AAB60:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_801AAAD8;
    }
}

loc_801AAB64:
{
    r0 = MemoryInline::FlatRead32((r13 + -25316));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AAB6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AAB78;
    }
}

loc_801AAB70:
{
    r3 = 0;
    ctx->lr = 0x801AAB78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A9C08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801AAB78:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
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
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801AAAA4 func_801AAAA4 preserves=true fpr_mask=0x00000000
