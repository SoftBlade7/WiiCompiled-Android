#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80857B08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80857B08;

loc_80857B08:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r3 = 1;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead8((r5 + 38));
}

loc_80857B44:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_80857B4C;
    }
}

loc_80857B48:
{
    r3 = r0;
}

loc_80857B4C:
{
    r0 = (r4 & 16);
}

loc_80857B50:
{
    r30 = (r3 & 255);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80857B5C;
    }
}

loc_80857B58:
{
    r31 = r30;
}

loc_80857B5C:
{
    r0 = (r4 & 32);
}

loc_80857B60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80857B6C;
    }
}

loc_80857B64:
{
    r0 = (r31 + r30);
    r31 = (r0 & 255);
}

loc_80857B6C:
{
    r0 = (r4 & 64);
}

loc_80857B70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80857B7C;
    }
}

loc_80857B74:
{
    r0 = (r31 + r30);
    r31 = (r0 & 255);
}

loc_80857B7C:
{
    r0 = (r4 & 128);
}

loc_80857B80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80857B94;
    }
}

loc_80857B84:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 510);
    r3 = (r31 + r0);
    r0 = (r3 + 1);
    r31 = (r0 & 255);
}

loc_80857B94:
{
    r0 = (r4 & 2);
}

loc_80857B98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80857BA4;
    }
}

loc_80857B9C:
{
    r0 = (r31 + 1);
    r31 = (r0 & 255);
}

loc_80857BA4:
{
    r0 = (r4 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80857BA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80857BB4;
    }
}

loc_80857BAC:
{
    r0 = (r31 + 1);
    r31 = (r0 & 255);
}

loc_80857BB4:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 108));
    ctr = r12;
    ctx->lr = 0x80857BC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r28);
    r31 = (r31 + r3);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 108));
    ctr = r12;
    ctx->lr = 0x80857BE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & 255);
}

loc_80857BE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80857BF8;
    }
}

loc_80857BE8:
{
    r0 = (r29 & 2048);
}

loc_80857BEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80857BF8;
    }
}

loc_80857BF0:
{
    r0 = (r31 + r30);
    r31 = (r0 & 255);
}

loc_80857BF8:
{
    r0 = (r29 & 4);
}

loc_80857BFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80857C0C;
    }
}

loc_80857C00:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 510);
    r0 = (r31 + r0);
    r31 = (r0 & 255);
}

loc_80857C0C:
{
    r0 = (r29 & 256);
}

loc_80857C10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80857C1C;
    }
}

loc_80857C14:
{
    r0 = (r31 + 1);
    r31 = (r0 & 255);
}

loc_80857C1C:
{
    r0 = (r29 & 4096);
}

loc_80857C20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80857C2C;
    }
}

loc_80857C24:
{
    r0 = (r31 + 1);
    r31 = (r0 & 255);
}

loc_80857C2C:
{
    r0 = (r29 & 512);
}

loc_80857C30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80857C3C;
    }
}

loc_80857C34:
{
    r0 = (r31 + 2);
    r31 = (r0 & 255);
}

loc_80857C3C:
{
    r0 = (r29 & 1024);
}

loc_80857C40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80857C4C;
    }
}

loc_80857C44:
{
    r0 = (r31 + 1);
    r31 = (r0 & 255);
}

loc_80857C4C:
{
    r0 = (r29 & 8192);
}

loc_80857C50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80857C5C;
    }
}

loc_80857C54:
{
    r0 = (r31 + 1);
    r31 = (r0 & 255);
}

loc_80857C5C:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_80857C70:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_80857C80;
    }
}

loc_80857C74:
{
}

loc_80857C78:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_80857C80;
    }
}

loc_80857C7C:
{
    r3 = 1;
}

loc_80857C80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80857C84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80857C9C;
    }
}

loc_80857C88:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 510);
    r0 = (r31 + r0);
    r31 = (r0 & 255);
    r0 = (r31 + 1);
    r31 = (r0 & 255);
}

loc_80857C9C:
{
    r3 = (r31 & 255);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80857B08 func_80857B08 preserves=true fpr_mask=0x00000000
