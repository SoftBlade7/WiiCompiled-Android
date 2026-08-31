#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80707E44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80707E44;

loc_80707E44:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 220));
    r4 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80707E6C:
{
    MemoryInline::FlatWrite8((r3 + 216), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707E90;
    }
}

loc_80707E74:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 5856));
    r4 = 284;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->lr = 0x80707E90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80707E90:
{
    r0 = MemoryInline::FlatRead8((r31 + 217));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80707E98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707F68;
    }
}

loc_80707E9C:
{
    r4 = MemoryInline::FlatRead32((r31 + 128));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80707EA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707ECC;
    }
}

loc_80707EAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707EB8;
    }
}

loc_80707EB0:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80707EBC;
}

loc_80707EB8:
{
    r0 = -1;
}

loc_80707EBC:
{
}

loc_80707EC0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(283))) {
        goto loc_80707ECC;
    }
}

loc_80707EC4:
{
    r3 = (r31 + 128);
    goto loc_80707F4C;
}

loc_80707ECC:
{
    r4 = MemoryInline::FlatRead32((r31 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80707ED4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707EF8;
    }
}

loc_80707ED8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707EE4;
    }
}

loc_80707EDC:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80707EE8;
}

loc_80707EE4:
{
    r0 = -1;
}

loc_80707EE8:
{
}

loc_80707EEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(283))) {
        goto loc_80707EF8;
    }
}

loc_80707EF0:
{
    r3 = (r31 + 132);
    goto loc_80707F4C;
}

loc_80707EF8:
{
    r4 = MemoryInline::FlatRead32((r31 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80707F00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707F24;
    }
}

loc_80707F04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707F10;
    }
}

loc_80707F08:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80707F14;
}

loc_80707F10:
{
    r0 = -1;
}

loc_80707F14:
{
}

loc_80707F18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(283))) {
        goto loc_80707F24;
    }
}

loc_80707F1C:
{
    r3 = (r31 + 136);
    goto loc_80707F4C;
}

loc_80707F24:
{
    r4 = MemoryInline::FlatRead32((r31 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80707F2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707F4C;
    }
}

loc_80707F30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707F3C;
    }
}

loc_80707F34:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80707F40;
}

loc_80707F3C:
{
    r0 = -1;
}

loc_80707F40:
{
}

loc_80707F44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(283))) {
        goto loc_80707F4C;
    }
}

loc_80707F48:
{
    r3 = (r31 + 140);
}

loc_80707F4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80707F50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80707F68;
    }
}

loc_80707F54:
{
    r0 = MemoryInline::FlatRead32((r31 + 96));
    r3 = 0;
    MemoryInline::FlatWrite8((r31 + 217), static_cast<uint8_t>(r3));
    r0 = (r0 & -1025);
    MemoryInline::FlatWrite32((r31 + 96), r0);
}

loc_80707F68:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80707E44 func_80707E44 preserves=true fpr_mask=0x00000000
