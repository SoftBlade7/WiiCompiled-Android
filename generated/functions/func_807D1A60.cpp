#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D1A60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D1A60;

loc_807D1A60:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + 26416);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    f31.d = MemoryInline::FlatReadFloat32((r30 + 2660));
    r4 = MemoryInline::FlatRead16((r3 + 246));
}

loc_807D1A9C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(8))) {
        goto loc_807D1AAC;
    }
}

loc_807D1AA0:
{
}

loc_807D1AA4:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(10))) {
        goto loc_807D1AAC;
    }
}

loc_807D1AA8:
{
    r0 = 1;
}

loc_807D1AAC:
{
}

loc_807D1AB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807D1AF0;
    }
}

loc_807D1AB4:
{
    r3 = r31;
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_807D1AC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807D1AF8;
    }
}

loc_807D1ACC:
{
    r3 = MemoryInline::FlatRead16((r31 + 246));
    r0 = 0;
}

loc_807D1AD8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(2))) {
        goto loc_807D1AE8;
    }
}

loc_807D1ADC:
{
}

loc_807D1AE0:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(3))) {
        goto loc_807D1AE8;
    }
}

loc_807D1AE4:
{
    r0 = 1;
}

loc_807D1AE8:
{
}

loc_807D1AEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D1AF8;
    }
}

loc_807D1AF0:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 2656));
    goto loc_807D1B4C;
}

loc_807D1AF8:
{
    r3 = MemoryInline::FlatRead16((r31 + 246));
}

loc_807D1B00:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_807D1B2C;
    }
}

loc_807D1B04:
{
    r3 = r31;
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
}

loc_807D1B18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D1B24;
    }
}

loc_807D1B1C:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 2660));
    goto loc_807D1B4C;
}

loc_807D1B24:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 2644));
    goto loc_807D1B4C;
}

loc_807D1B2C:
{
    r0 = MemoryInline::FlatRead16((r31 + 244));
}

loc_807D1B34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_807D1B4C;
    }
}

loc_807D1B38:
{
}

loc_807D1B3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D1B48;
    }
}

loc_807D1B40:
{
}

loc_807D1B44:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(5))) {
        goto loc_807D1B4C;
    }
}

loc_807D1B48:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 2656));
}

loc_807D1B4C:
{
    r29 = MemoryInline::FlatRead16((r31 + 246));
    r3 = (r29 + 65536);
    r0 = (r3 + -6);
    r0 = (r0 & 65535);
}

loc_807D1B60:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_807D1B68;
    }
}

loc_807D1B64:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 2644));
}

loc_807D1B68:
{
    r0 = MemoryInline::FlatRead8((r31 + 248));
}

loc_807D1B70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D1B80;
    }
}

loc_807D1B74:
{
    r3 = MemoryInline::FlatRead32((r31 + 108));
    // inline leaf 0x8055F27C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead16((r3 + 56));
    r3 = (r0 & 1);
    // end of inlined leaf 0x8055F27C
    goto loc_807D1B84;
}

loc_807D1B80:
{
    r3 = 0;
}

loc_807D1B84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D1B88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D1B94;
    }
}

loc_807D1B8C:
{
    r3 = 0;
    goto loc_807D1BA8;
}

loc_807D1B94:
{
    f1.d = f31.d;
    r3 = r31;
    r4 = r29;
    r5 = 1;
    ctx->lr = 0x807D1BA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807CC018u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807D1BA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D1BAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D1BB8;
    }
}

loc_807D1BB0:
{
    r0 = MemoryInline::FlatRead16((r31 + 246));
    MemoryInline::FlatWrite16((r31 + 244), static_cast<uint16_t>(r0));
}

loc_807D1BB8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 52));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807D1A60 func_807D1A60 preserves=false fpr_mask=0x80000000
