#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80514C30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80514C30;

loc_80514C30:
{
    r5 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    f0.d = MemoryInline::FlatReadFloat32((r5 + -1428));
    r4 = 0x80890000u;
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    r6 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r4 + -1476));
    r8 = MemoryInline::FlatRead8(r5);
    goto loc_80514D10;
}

loc_80514C5C:
{
    r7 = MemoryInline::FlatRead32((r6 + -10520));
    r5 = (r8 & 65535);
    r4 = MemoryInline::FlatRead32((r7 + 16));
}

loc_80514C6C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80514C78;
    }
}

loc_80514C70:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    goto loc_80514C7C;
}

loc_80514C78:
{
    r0 = 0;
}

loc_80514C7C:
{
}

loc_80514C80:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_80514CB0;
    }
}

loc_80514C84:
{
    r5 = MemoryInline::FlatRead32((r7 + 16));
    r4 = (r8 & 65535);
    r0 = MemoryInline::FlatRead16((r5 + 4));
}

loc_80514C94:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80514CA8;
    }
}

loc_80514C98:
{
    r4 = MemoryInline::FlatRead32(r5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    goto loc_80514CB4;
}

loc_80514CA8:
{
    r4 = 0;
    goto loc_80514CB4;
}

loc_80514CB0:
{
    r4 = 0;
}

loc_80514CB4:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80514CC8:
{
    f4.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80514CE4;
    }
}

loc_80514CDC:
{
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80514CE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80514CEC;
    }
}

loc_80514CE4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
}

loc_80514CEC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80514CF4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80514D04;
    }
}

loc_80514CF8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80514D00:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80514D0C;
    }
}

loc_80514D04:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
}

loc_80514D0C:
{
    r8 = (r8 + 1);
}

loc_80514D10:
{
    r7 = MemoryInline::FlatRead32(r3);
    r5 = (r8 & 65535);
    r4 = MemoryInline::FlatRead8((r7 + 1));
    r0 = MemoryInline::FlatRead8(r7);
    r4 = (r0 + r4);
    r0 = (r4 + -1);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80514D30:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80514C5C;
    }
}

loc_80514D34:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80514C30 func_80514C30 preserves=true fpr_mask=0x00000000
