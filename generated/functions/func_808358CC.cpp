#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808358CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_808358CC;

loc_808358CC:
{
    r0 = 2;
    r3 = r4;
    r6 = 0;
    r7 = 1;
    ctr = r0;
}

loc_808358E0:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & r7);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80835934;
    }
}

loc_808358EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32(r5);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808358FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80835924;
    }
}

loc_80835900:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8083590C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80835924;
    }
}

loc_80835910:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8083591C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80835924;
    }
}

loc_80835920:
{
    r0 = 1;
}

loc_80835924:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80835928:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80835934;
    }
}

loc_8083592C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80835934:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & -2);
    r0 = (r0 & r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083598C;
    }
}

loc_80835944:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32(r5);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80835954:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8083597C;
    }
}

loc_80835958:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80835964:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8083597C;
    }
}

loc_80835968:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80835974:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8083597C;
    }
}

loc_80835978:
{
    r0 = 1;
}

loc_8083597C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80835980:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083598C;
    }
}

loc_80835984:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8083598C:
{
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_3 & -2);
    r3 = (r3 + 24);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808358E0;
    }
}

loc_8083599C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000C9 gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808358CC func_808358CC preserves=true fpr_mask=0x00000000
