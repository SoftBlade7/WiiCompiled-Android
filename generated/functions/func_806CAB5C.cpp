#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CAB5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806CAB5C;

loc_806CAB5C:
{
    r6 = MemoryInline::FlatRead32((r3 + 304));
    r5 = 0x808C0000u;
    r7 = MemoryInline::FlatRead32((r3 + 300));
    r5 = (r5 + 17160);
    r4 = 0;
    r0 = (r7 * r6);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_806CAB84;
    }
}

loc_806CAB78:
{
}

loc_806CAB7C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(r6))) {
        goto loc_806CAB84;
    }
}

loc_806CAB80:
{
    r4 = 1;
}

loc_806CAB84:
{
}

loc_806CAB88:
{
    r0 = 0;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806CAB9C;
    }
}

loc_806CAB90:
{
}

loc_806CAB94:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(1))) {
        goto loc_806CAB9C;
    }
}

loc_806CAB98:
{
    r0 = 1;
}

loc_806CAB9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806CABA0:
{
    r4 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CABB4;
    }
}

loc_806CABA8:
{
}

loc_806CABAC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(2))) {
        goto loc_806CABB4;
    }
}

loc_806CABB0:
{
    r4 = 1;
}

loc_806CABB4:
{
}

loc_806CABB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806CABC8;
    }
}

loc_806CABBC:
{
    r0 = MemoryInline::FlatRead32((r3 + 188));
    MemoryInline::FlatWrite16((r3 + 280), static_cast<uint16_t>(r0));
    goto loc_806CABD8;
}

loc_806CABC8:
{
}

loc_806CABCC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806CABD8;
    }
}

loc_806CABD0:
{
    r0 = MemoryInline::FlatRead32((r3 + 188));
    MemoryInline::FlatWrite16((r3 + 282), static_cast<uint16_t>(r0));
}

loc_806CABD8:
{
    r4 = MemoryInline::FlatRead16((r3 + 280));
}

loc_806CABE0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806CAC18;
    }
}

loc_806CABE4:
{
    r6 = MemoryInline::FlatRead32((r3 + 188));
}

loc_806CABEC:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r4))) {
        goto loc_806CAC18;
    }
}

loc_806CABF0:
{
    r0 = MemoryInline::FlatRead16((r5 + 68));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_806CABFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806CAC18;
    }
}

loc_806CAC00:
{
    r0 = (r6 - r4);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 52));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 56));
    r4 = (r0 & 65535);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 248));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x806CACD0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_806CAC18:
{
    r4 = MemoryInline::FlatRead16((r3 + 282));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806CAC20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CAC5C;
    }
}

loc_806CAC24:
{
    r6 = MemoryInline::FlatRead32((r3 + 188));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
}

loc_806CAC2C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806CAC5C;
    }
}

loc_806CAC30:
{
    r0 = MemoryInline::FlatRead16((r5 + 68));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_806CAC3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806CAC5C;
    }
}

loc_806CAC40:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 52));
    r0 = (r6 - r4);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 56));
    r4 = (r0 & 65535);
    f1.d = (-(f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 248));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x806CACD0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_806CAC5C:
{
    r0 = MemoryInline::FlatRead32((r3 + 188));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 272));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 44));
    r4 = (r0 & 65535);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 48));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x806CACD0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFC011 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806CAB5C func_806CAB5C preserves=true fpr_mask=0x00000000
