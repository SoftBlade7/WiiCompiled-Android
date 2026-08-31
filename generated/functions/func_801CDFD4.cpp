#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CDFD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801CDFD4;

loc_801CDFD4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x80350000u;
    r30 = (r30 + 16608);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r3 = (r4 + 800);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801CE01C;
    }
}

loc_801CE014:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(13));
}

loc_801CE018:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801CE024;
    }
}

loc_801CE01C:
{
    r3 = 0;
    goto loc_801CE0A4;
}

loc_801CE024:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = MemoryInline::FlatRead8((r30 + 1800));
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
}

loc_801CE038:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CE0A0;
    }
}

loc_801CE03C:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CE050;
    }
}

loc_801CE044:
{
    r0 = 255;
    r4 = 255;
    goto loc_801CE078;
}

loc_801CE050:
{
    r3 = (r3 + 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r0 + r3);
    r0 = (r3 + -14);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-14)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_801CE060:
{
    r4 = (r3 + 14);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_801CE06C;
    }
}

loc_801CE068:
{
    r0 = 0;
}

loc_801CE06C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(78));
}

loc_801CE070:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801CE078;
    }
}

loc_801CE074:
{
    r4 = 78;
}

loc_801CE078:
{
    r3 = (r0 & 255);
    r4 = (r4 & 255);
    ctx->lr = 0x801CE084u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8013A31Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = r3;
    r3 = 0x802A0000u;
    r3 = (r3 + 824);
    r4 = (r0 & 255);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    r31 = 1;
}

loc_801CE0A0:
{
    r3 = r31;
}

loc_801CE0A4:
{
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801CDFD4 func_801CDFD4 preserves=true fpr_mask=0x00000000
